//
//  Sharing.m
//  Sharing
//
//  Created by Mopsicus on 10.06.16.
//
#include "AppDelegateListener.h"
#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>
#import <AdSupport/ASIdentifierManager.h>
#import <VKSdkFramework/VKSdkFramework.h>
#import <FBSDKShareKit/FBSDKShareKit.h>
#import <FBSDKCoreKit/FBSDKCoreKit.h>
#import <Social/Social.h>

#pragma mark -
#pragma mark OK Headers

typedef void (^OKResultBlock)(id data);
typedef void (^OKErrorBlock)(NSError *error);
#define OKColor [UIColor colorWithRed:0xED/255.f green:0x81/255.f blue:0x2B/255.f alpha:1.f]

FOUNDATION_EXPORT  NSString * const OK_API_ERROR_CODE_DOMAIN;
FOUNDATION_EXPORT  NSString * const OK_SDK_ERROR_CODE_DOMAIN;

typedef NS_ENUM(NSInteger, OKSDKErrorCode) {
    OKSDKErrorCodeNotIntialized = 1,
    OKSDKErrorCodeNoSchemaRegistered = 2,
    OKSDKErrorCodeBadOAuthRedirectUri = 3,
    OKSDKErrorCodeBadApiReponse = 4,
    OKSDKErrorCodeOAuthError = 5,
    OKSDKErrorCodeUserConfirmationDialogAlreadyInProgress = 6,
    OKSDKErrorCodeNotAuthorized = 7,
    OKSDKErrorCodeCancelledByUser = 8
};

@interface OKSDKInitSettings: NSObject
@property (nonatomic, strong) NSString *appId;
@property (nonatomic, strong) NSString *appKey;
@property (nonatomic, strong) UIViewController* (^controllerHandler)(void);
@end

#pragma mark -
#pragma mark OK Exec

#define kIOS9x (kIOS8x && [[NSProcessInfo processInfo] operatingSystemVersion].majorVersion >= 9)  // TODO: заменить после перехода на SDK9
#define kIOS8x (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_7_1)
#define kIOS7x (floor(NSFoundationVersionNumber) > NSFoundationVersionNumber_iOS_6_1)

NSString *const OK_SDK_VERSION = @"2.0.10";
NSTimeInterval const OK_REQUEST_TIMEOUT = 180.0;
NSInteger const OK_MAX_CONCURRENT_REQUESTS = 3;
NSString *const OK_OAUTH_URL = @"https://connect.ok.ru/oauth/authorize";
NSString *const OK_WIDGET_URL = @"https://connect.ok.ru/dk?st.cmd=";
NSString *const OK_API_URL = @"https://api.ok.ru/fb.do?";
NSString *const OK_OAUTH_APP_URL = @"okauth://authorize";
NSString *const OK_USER_DEFS_ACCESS_TOKEN = @"ok_access_token";
NSString *const OK_USER_DEFS_SECRET_KEY = @"ok_secret_key";
NSString *const OK_SDK_NOT_INIT_COMMON_ERROR = @"OKSDK not initialized you should call initWithSettings first";
//export
NSString *const OK_API_ERROR_CODE_DOMAIN = @"ru.ok.api";
NSString *const OK_SDK_ERROR_CODE_DOMAIN = @"ru.ok.sdk";


typedef void (^OKCompletitionHander)(id data, NSError *error);

@implementation OKSDKInitSettings
@end

@implementation NSString (OKConnection)

- (NSString *)ok_md5 {
    const char *cStr = [self UTF8String];
    unsigned char digest[CC_MD5_DIGEST_LENGTH];
    CC_MD5(cStr, (CC_LONG)strlen(cStr), digest);
    NSMutableString *output = [NSMutableString stringWithCapacity:CC_MD5_DIGEST_LENGTH * 2];
    for (int i = 0; i < CC_MD5_DIGEST_LENGTH; i++) [output appendFormat:@"%02x", digest[i]];
    return  output;
}

- (NSString *)ok_encode {
    static NSMutableCharacterSet *characterSet;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        characterSet = [NSCharacterSet.URLQueryAllowedCharacterSet mutableCopy];
        [characterSet removeCharactersInString:@"+=&%"];
    });
    return [self stringByAddingPercentEncodingWithAllowedCharacters:characterSet];
}

- (NSString *)ok_decode {
    return [self stringByRemovingPercentEncoding];
}

@end

@implementation NSURL (OKConnection)

- (NSMutableDictionary *)ok_params {
    NSMutableDictionary *result = [NSMutableDictionary dictionary];
    NSArray *pairs = [(self.fragment ?: self.query) componentsSeparatedByString:@"&"];
    for (NSString *pair in pairs) {
        NSArray *kv = [pair componentsSeparatedByString:@"="];
        if (kv.count == 2) {
            result[[(NSString *)kv[0] ok_decode]]=[kv[1] ok_decode];
        }
    }
    return result;
}

@end

@implementation NSBundle (CFBundleURLTypes)

+ (BOOL)ok_hasRegisteredURLScheme:(NSString *)URLScheme {
    static dispatch_once_t onceToken;
    static NSArray *URLTypes;
    dispatch_once(&onceToken, ^{
        URLTypes = [[NSBundle mainBundle] objectForInfoDictionaryKey:@"CFBundleURLTypes"];
    });
    
    for (NSDictionary *URLType in URLTypes) {
        NSArray *URLSchemes = [URLType valueForKey:@"CFBundleURLSchemes"];
        if ([URLSchemes containsObject:URLScheme]) {
            return YES;
        }
    }
    return NO;
}

@end

@implementation NSDictionary (OKConnection)

- (NSError *)ok_error {
    if(self[@"error_code"]) {
        return [[NSError alloc] initWithDomain:OK_API_ERROR_CODE_DOMAIN code:[self[@"error_code"] intValue] userInfo:@{NSLocalizedDescriptionKey: self[@"error_msg"]}];
    }
    if(self[@"error"]) {
        return [[NSError alloc] initWithDomain:OK_API_ERROR_CODE_DOMAIN code:-1 userInfo:@{NSLocalizedDescriptionKey: self[@"error"]}];
    }
    return nil;
}

- (NSDictionary *)ok_union:(NSDictionary *)dict {
    NSMutableDictionary *dictionary =[[NSMutableDictionary alloc] initWithDictionary:self];
    [dictionary setValuesForKeysWithDictionary:dict];
    return dictionary;
}

- (NSString *)ok_queryStringWithSignature:(NSString *)secretKey sigName:(NSString *)sigName{
    NSMutableString *sigSource = [NSMutableString string];
    NSMutableString *queryString = [NSMutableString string];
    NSArray *sortedKeys = [[self allKeys] sortedArrayUsingSelector: @selector(compare:)];
    for (NSString *key in sortedKeys) {
        NSString *value = self[key];
        [sigSource appendString:[NSString stringWithFormat:@"%@=%@", key, value ]];
        [queryString appendString:[NSString stringWithFormat:@"%@=%@&", key, [value ok_encode]]];
    }
    [sigSource appendString:secretKey];
    [queryString appendString:[NSString stringWithFormat:@"%@=%@&", sigName, [sigSource ok_md5]]];
    return queryString;
}

- (NSString *)ok_queryString {
    NSMutableString *queryString = [NSMutableString string];
    for (NSString *key in self) [queryString appendString:[NSString stringWithFormat:@"%@=%@&", [key ok_encode], [self[key] ok_encode]]];
    return queryString;
}

- (NSString *)ok_json:(NSError *)error {
    NSData *data = [NSJSONSerialization dataWithJSONObject:self options:0 error:&error ];
    return data?[[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding]:nil;
}

@end

@interface OKWebViewController: UIViewController<UIWebViewDelegate,UIBarPositioningDelegate>
@property(nonatomic,weak) UIActivityIndicatorView *indicator;
@property(nonatomic,weak) UIWebView *webView;
@property(nonatomic,weak) UIButton *cancelButton;
@property(nonatomic,copy) NSURL *currentUrl;
@property(nonatomic,assign) BOOL loaded;
@property(nonatomic,strong) OKErrorBlock errorBlock;

-(void)cancelButtonClicked;

-(void)cancel;

@end


@interface OKConnection : NSObject

@property(nonatomic,strong) OKSDKInitSettings *settings;
@property(nonatomic,copy) NSString *oauthRedirectScheme;
@property(nonatomic,copy) NSString *oauthRedirectUri;

@property(nonatomic,strong) NSOperationQueue *queue;
@property(nonatomic,weak) UIViewController *webViewController;

@property(nonatomic,strong) NSString *accessToken;
@property(nonatomic,strong) NSString *accessTokenSecretKey;
@property(nonatomic,strong) NSString *sdkToken;

@property(nonatomic,strong) NSMutableDictionary *completitionHandlers;

@end


@implementation OKWebViewController

- (instancetype) initWithErrorBlock: (OKErrorBlock) errorBlock url: (NSURL *)url{
    if(self = [super init]) {
        _errorBlock = errorBlock;
        _currentUrl = url;
    }
    return self;
}

- (void)viewDidLoad {
    self.view.backgroundColor = OKColor;
    self.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    CGFloat statusBarOffset = [UIApplication sharedApplication].isStatusBarHidden?0:20;
    UIWebView *webView = [[UIWebView alloc] initWithFrame:CGRectMake(0,statusBarOffset,self.view.bounds.size.width,self.view.bounds.size.height - statusBarOffset)];
    webView.delegate = self;
    webView.backgroundColor = [UIColor whiteColor];
    webView.opaque = NO;
    webView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    
    UIActivityIndicatorView *activityView = [[UIActivityIndicatorView alloc]
                                             initWithActivityIndicatorStyle:UIActivityIndicatorViewStyleWhiteLarge];
    
    UIButton *cancelButton = [[UIButton alloc] init];
    [cancelButton.titleLabel setFont:[UIFont systemFontOfSize:30]];
    [cancelButton addTarget:self action:@selector(cancelButtonClicked) forControlEvents:UIControlEventTouchDown];
    [cancelButton setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    cancelButton.backgroundColor = OKColor;
    cancelButton.layer.cornerRadius = 5;
    cancelButton.contentHorizontalAlignment = UIControlContentHorizontalAlignmentCenter;
    cancelButton.contentVerticalAlignment = UIControlContentVerticalAlignmentCenter;
    [cancelButton setTitle:@"\u2715" forState:UIControlStateNormal];
    
    [self.view addSubview:(self.webView = webView)];
    [self.view addSubview:(self.indicator = activityView)];
    [webView.scrollView addSubview:(self.cancelButton = cancelButton)];
    [self loadUrl:self.currentUrl];
}

- (void)viewWillLayoutSubviews{
    [super viewWillLayoutSubviews];
    CGFloat statusBarOffset = [UIApplication sharedApplication].isStatusBarHidden?0:20;
    self.webView.frame = CGRectMake(0,statusBarOffset,self.view.bounds.size.width,self.view.bounds.size.height - statusBarOffset);
    self.webView.scrollView.contentOffset = CGPointZero;
    self.webView.scrollView.contentInset = UIEdgeInsetsZero;
    NSString* cmd = [self.currentUrl ok_params][@"st.cmd"];
    if(self.loaded && [cmd isEqualToString:@"WidgetMediatopicPost"]) {
        self.cancelButton.frame = CGRectMake(MAX(5,self.view.center.x - 245),5,30,30);
    } else {
        self.cancelButton.frame = CGRectMake(5,5,30,30);
    }
    self.indicator.center=(CGPoint){self.view.center.x,static_cast<CGFloat>(self.indicator.bounds.size.height * 1.5)};
}

- (void)loadUrl:(NSURL *)url {
    [self.webView loadRequest:[NSURLRequest requestWithURL: url cachePolicy:NSURLRequestReloadIgnoringCacheData
                                           timeoutInterval: OK_REQUEST_TIMEOUT]];
}

- (BOOL)webView:(UIWebView *)webView shouldStartLoadWithRequest:(NSURLRequest *)request navigationType:(UIWebViewNavigationType)navigationType {
    self.currentUrl = request.URL;
    return YES;
}

- (void)cancelButtonClicked{
    [self cancel];
    _errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeCancelledByUser userInfo:@{NSLocalizedDescriptionKey: @"Web view controller cancelled by user"}]);
}

- (void)cancel {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self dismissViewControllerAnimated:true completion:nil];
    });
}

- (void)webViewDidStartLoad:(UIWebView *)webView {
    self.indicator.center=(CGPoint){self.view.center.x,static_cast<CGFloat>(self.indicator.bounds.size.height * 1.5)};
    [self.indicator startAnimating];
    self.loaded = false;
}

- (void)webViewDidFinishLoad:(UIWebView *)webView {
    [self.indicator stopAnimating];
    self.loaded = true;
    [self.view setNeedsLayout];
}

- (void)webView:(UIWebView *)webView didFailLoadWithError:(NSError *)error {
    [self.indicator stopAnimating];
    if(![self.view superview]) {
        return;
    }
    if([@"WebKitErrorDomain" isEqualToString:error.domain]) {
        if(!([error.userInfo[NSURLErrorFailingURLStringErrorKey] hasPrefix:@"http://"] || [error.userInfo[NSURLErrorFailingURLStringErrorKey] hasPrefix:@"https://"])) {
            [self cancel];
            return;
        }
    }
    self.errorBlock(error);
    [self cancel];
}

@end


@implementation OKConnection

+ (NSError *)sdkError:(NSInteger)code format:(NSString *)format, ... {
    va_list args;
    va_start(args, format);
    NSString* error = [[NSString alloc] initWithFormat:format arguments:args];
    va_end(args);
    return [[NSError alloc] initWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:code userInfo:@{NSLocalizedDescriptionKey: error}];
}

- (instancetype)initWithSettings:(OKSDKInitSettings *)settings {
    if(self = [super init]) {
        _settings = settings;
        _queue = [[NSOperationQueue alloc] init];
        _queue.name = @"OK-API-Requests";
        _queue.maxConcurrentOperationCount = OK_MAX_CONCURRENT_REQUESTS;
        _oauthRedirectScheme = [NSString stringWithFormat:@"ok%@", _settings.appId];
        _oauthRedirectUri = [NSString stringWithFormat:@"%@://authorize", _oauthRedirectScheme];
        _completitionHandlers = [NSMutableDictionary new];
        NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
        _accessToken = [userDefaults objectForKey:OK_USER_DEFS_ACCESS_TOKEN];
        _accessTokenSecretKey = [userDefaults objectForKey:OK_USER_DEFS_SECRET_KEY];
    }
    return self;
}

- (void)openInWebview:(NSURL *)url success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    @synchronized(self) {
        if( [[self.webViewController view] superview] ) {
            return errorBlock([OKConnection sdkError:OKSDKErrorCodeUserConfirmationDialogAlreadyInProgress format:@"user confirmation dialog is already in progress"]);
        }
        dispatch_async(dispatch_get_main_queue(), ^{
            UIViewController *hostController = self.settings.controllerHandler();
            UIViewController  *vc;
            
            vc = [[OKWebViewController alloc] initWithErrorBlock:errorBlock url:url];
            
            if (kIOS8x) {
                vc.modalPresentationStyle = UIModalPresentationOverFullScreen;
            }
            [hostController presentViewController:vc animated:true completion:nil];
            self.webViewController = vc;
        });
    }
}

- (BOOL)openUrl:(NSURL *)url {
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.webViewController dismissViewControllerAnimated:YES completion:nil];
    });
    NSString *key = [[url absoluteString] componentsSeparatedByCharactersInSet:[NSCharacterSet characterSetWithCharactersInString:@"#?"]][0];
    OKCompletitionHander completitionHander = self.completitionHandlers[key];
    NSDictionary *answer = [url ok_params];
    if(completitionHander) {
        [self.completitionHandlers removeObjectForKey:key];
        completitionHander(answer, [answer ok_error]);
        return YES;
    } else if([key isEqualToString:self.oauthRedirectUri]) {
        if (![answer ok_error]) {
            [self saveTokens:answer];
        }
        return YES;
    }
    return NO;
}

- (void)authorizeWithPermissions:(NSArray *)permissions success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    if (self.accessToken && self.accessTokenSecretKey) {
        return successBlock(@[self.accessToken, self.accessTokenSecretKey]);
    }
    
    UIApplication *app = [UIApplication sharedApplication];
    if (![NSBundle ok_hasRegisteredURLScheme:self.oauthRedirectScheme]) {
        return errorBlock([OKConnection sdkError:OKSDKErrorCodeNoSchemaRegistered format:@"%@ schema should be registered for current app", self.oauthRedirectUri]);
    }
    NSString *queryString = [@{@"response_type":@"token",@"client_id":self.settings.appId,@"redirect_uri":[self.oauthRedirectUri ok_encode],@"layout":@"a",@"scope":[[permissions componentsJoinedByString:@";"] ok_encode]} ok_queryString];
    NSURL *appUrl = [NSURL URLWithString: [NSString stringWithFormat:@"%@?%@",OK_OAUTH_APP_URL,queryString]];
    __weak OKConnection *wSelf = self;
    self.completitionHandlers[self.oauthRedirectUri] = ^(NSDictionary *data, NSError *error) {
        if(error) {
            errorBlock(error);
        } else {
            [wSelf saveTokens:data];
            if(wSelf.accessToken || wSelf.accessTokenSecretKey) {
                successBlock(@[wSelf.accessToken, wSelf.accessTokenSecretKey]);
            } else {
                errorBlock(error);
            }
        }
    };
    if (![app canOpenURL: appUrl]) {
        [self openInWebview:[NSURL URLWithString:[NSString stringWithFormat:@"%@?%@",OK_OAUTH_URL,queryString]] success: successBlock error: errorBlock];
    } else {
        [app openURL:appUrl];
    }
}

- (void)saveTokens:(NSDictionary *)data {
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    [userDefaults setObject:(self.accessToken = data[@"access_token"]) forKey:OK_USER_DEFS_ACCESS_TOKEN];
    [userDefaults setObject:(self.accessTokenSecretKey = data[@"session_secret_key"]) forKey:OK_USER_DEFS_SECRET_KEY];
    [userDefaults synchronize];
}

- (void)invokeMethod:(NSString *)method arguments:(NSDictionary *)methodParams session:(bool)sessionMethod signed:(bool)signedMethod success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    if((!self.accessToken && sessionMethod) || (!self.accessTokenSecretKey && signedMethod)) {
        return errorBlock([OKConnection sdkError:OKSDKErrorCodeNotAuthorized format:@"No access_token defined you should invoke authorizeWithPermissions first"]);
    }
    NSMutableDictionary *arguments = [[NSMutableDictionary alloc] initWithDictionary:methodParams];
    [arguments setValuesForKeysWithDictionary:@{@"application_key":self.settings.appKey, @"method":method, @"format":@"json", @"platform":@"IOS"}];
    NSString* queryString = signedMethod?[arguments ok_queryStringWithSignature:self.accessTokenSecretKey sigName:@"sig"]:[arguments ok_queryString];
    NSString* url = sessionMethod?[NSString stringWithFormat:@"%@%@access_token=%@",OK_API_URL,queryString,self.accessToken]:[NSString stringWithFormat:@"%@%@",OK_API_URL,queryString];
    NSMutableURLRequest *request = [NSMutableURLRequest
                                    requestWithURL:[NSURL URLWithString:url] cachePolicy:NSURLRequestReloadIgnoringLocalCacheData timeoutInterval:OK_REQUEST_TIMEOUT];
    [request setValue:[NSString stringWithFormat:@"OK-IOS-SDK  %@",OK_SDK_VERSION] forHTTPHeaderField:@"User-Agent"];
    [NSURLConnection sendAsynchronousRequest:request queue:self.queue completionHandler:^(NSURLResponse *response, NSData *data, NSError *error) {
        if (error) {
            return errorBlock(error);
        }
        NSError *jsonParsingError = nil;
        id result = [NSJSONSerialization JSONObjectWithData:data options:NSJSONReadingAllowFragments error:&jsonParsingError];
        if(jsonParsingError) {
            return errorBlock(error);
        }
        if ([result isKindOfClass:[NSDictionary class]]) {
            if (result[@"error_code"]) {
                return errorBlock([(NSDictionary *)result ok_error]);
            }
            return successBlock(result);
        }
        if([result isKindOfClass:[NSArray class]]) {
            return successBlock(result);
        }
        if([result isKindOfClass:[NSNumber class]]) {
            return successBlock(result);
        }
        if([result isKindOfClass:[NSString class]]) {
            return successBlock(result);
        }
        return errorBlock([OKConnection sdkError:OKSDKErrorCodeBadApiReponse format:@"unknown api response: %@",[[NSString alloc] initWithData:data encoding:NSUTF8StringEncoding]]);
        
    }];
    
}

- (void)showWidget:(NSString *)command arguments:(NSDictionary *)arguments options:(NSDictionary *)options success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    NSString *returnUri = [NSString stringWithFormat:@"ok%@://%@",self.settings.appId, command];
    NSString *widgetUrl = [NSString stringWithFormat:@"%@%@&%@%@",OK_WIDGET_URL,[command ok_encode],[[arguments ok_union: @{@"st.redirect_uri":returnUri}]ok_queryStringWithSignature:self.accessTokenSecretKey sigName:@"st.signature"],[[options ok_union: @{@"st.access_token":self.accessToken,@"st.app":self.settings.appId,@"st.nocancel":@"on"}] ok_queryString]];
    self.completitionHandlers[returnUri] = ^(id data, NSError *error) {
        if(error) {
            errorBlock(error);
        } else {
            successBlock(data);
        }
    };
    [self openInWebview:[NSURL URLWithString:widgetUrl] success: successBlock error: errorBlock];
}

- (void)shutdown {
    [self.queue cancelAllOperations];
    [self.webViewController dismissViewControllerAnimated:NO completion:nil];
}

- (void)clearAuth {
    NSUserDefaults *userDefaults = [NSUserDefaults standardUserDefaults];
    self.accessToken = nil;
    self.accessTokenSecretKey = nil;
    [userDefaults removeObjectForKey:OK_USER_DEFS_ACCESS_TOKEN];
    [userDefaults removeObjectForKey:OK_USER_DEFS_SECRET_KEY];
    
    NSArray *cookies = [[NSHTTPCookieStorage sharedHTTPCookieStorage] cookies];
    for (NSHTTPCookie *cookie in cookies) {
        if (NSNotFound != [cookie.domain rangeOfString:@"odnoklassniki.ru"].location || NSNotFound != [cookie.domain rangeOfString:@"ok.ru"].location) {
            [[NSHTTPCookieStorage sharedHTTPCookieStorage]
             deleteCookie:cookie];
        }
    }
}

@end


#pragma mark -
#pragma mark Sharing

@interface Sharing : UIViewController <VKSdkDelegate, VKSdkUIDelegate>
@end

@implementation Sharing;

static NSArray *SCOPE = nil;                                                        // Для ВК
static NSString *shareText;                                                         // Текст для шаринга
static NSString *shareUrl;                                                          // URL для шаринга (опция)
static NSArray *shareService = @[@"vk", @"fb", @"tw", @"ok", @"wa", @"vb", @"tg"];  // Список сервисов для шаринга
static NSMutableArray *shareParams;


// Делаем копию строки в куче
- (char *)makeStringCopy:(const char *)string {
    return (string == NULL) ? NULL : strcpy((char *)malloc(strlen(string) + 1), string);
}

// Поделиться в ВКонтакте
- (void)shareVKontakte {
    [self initWithID:shareParams[0] withResult:^(BOOL isReady) {
        if (isReady)
            [self shareWithText:shareText];
    }];
}

// Поделиться в Viber
- (void)shareViber {
    NSString *msg = [shareText stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLHostAllowedCharacterSet]];
    NSString *url = [NSString stringWithFormat:@"viber://forward?text=%@", msg];
    if(![[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:url]] || ![[UIApplication sharedApplication] openURL:[NSURL URLWithString:url]]) {
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"NotInstall" UTF8String]]);
    }
}

// Поделиться в Telegram
- (void)shareTelegram {
    NSString *msg = [shareText stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLHostAllowedCharacterSet]];
    NSString *url = [NSString stringWithFormat:@"tg://msg?text=%@", msg];
    if(![[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:url]] || ![[UIApplication sharedApplication] openURL:[NSURL URLWithString:url]]) {
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"NotInstall" UTF8String]]);
    }
}

// Поделиться в Одноклассниках
- (void)shareOdnoklassniki {
    OKSDKInitSettings *settings = [OKSDKInitSettings new];
    [settings setAppId:shareParams[0]];
    [settings setAppKey:shareParams[1]];
    [settings setControllerHandler:^UIViewController *{
        return UnityGetGLViewController();
    }];
    [self initWithSettings:settings];
    if (connection.accessToken == nil) {
        [self authorizeWithPermissions:[NSArray arrayWithObjects:@"VALUABLE_ACCESS", nil] success:^(id data) {
            [self showOdnoklassnikiShare];
        } error:^(NSError *error) {
            UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"AccessDenied" UTF8String]]);
        }];
    } else
        [self showOdnoklassnikiShare];
}

// Поделиться в WhatsApp
- (void)shareWhatsApp {
    NSString *msg = [shareText stringByAddingPercentEncodingWithAllowedCharacters:[NSCharacterSet URLHostAllowedCharacterSet]];
    NSString *url = [NSString stringWithFormat:@"whatsapp://send?text=%@", msg];
    if(![[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:url]] || ![[UIApplication sharedApplication] openURL:[NSURL URLWithString:url]]) {
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"NotInstall" UTF8String]]);
    }
}

// Поделиться в Facebook
- (void)shareFacebook {
    if ([SLComposeViewController isAvailableForServiceType:SLServiceTypeFacebook]) {
        if ([[UIApplication sharedApplication] canOpenURL:[NSURL URLWithString:@"fb://"]] || ![[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"fb://"]]) {
            FBSDKShareLinkContent *content = [[FBSDKShareLinkContent alloc] init];
            [content setContentDescription:shareText];
            [content setContentURL:[NSURL URLWithString:shareUrl]];
            [FBSDKShareDialog showFromViewController:UnityGetGLViewController() withContent:content delegate:nil];
        } else {
            SLComposeViewController *composer = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeFacebook];
            [composer setInitialText:shareText];
            [composer addURL:[NSURL URLWithString:shareUrl]];
            [composer setCompletionHandler:^(SLComposeViewControllerResult result) {
                [UnityGetGLViewController() dismissViewControllerAnimated:YES completion:nil];
            }];
            [UnityGetGLViewController() presentViewController:composer animated:YES completion:nil];
        }
    } else
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"NotAvailable" UTF8String]]);
}

// Поделиться в Twitter
- (void)shareTwitter {
    if ([SLComposeViewController isAvailableForServiceType:SLServiceTypeTwitter]) {
        SLComposeViewController *composer = [SLComposeViewController composeViewControllerForServiceType:SLServiceTypeTwitter];
        [composer setInitialText:shareText];
        [composer addURL:[NSURL URLWithString:shareUrl]];
        [composer setCompletionHandler:^(SLComposeViewControllerResult result) {
            [UnityGetGLViewController() dismissViewControllerAnimated:YES completion:nil];
        }];
        [UnityGetGLViewController() presentViewController:composer animated:YES completion:nil];
    } else
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"NotAvailable" UTF8String]]);
}

// Поделиться с помощью
- (void)shareVia:(NSString *)service url:(NSString *)url withText:(NSString *)text andParams:(NSString *)params {
    shareParams = [NSMutableArray arrayWithArray:[params componentsSeparatedByString:@";"]];
    shareText = text;
    shareUrl = url;
    int item = (int)[shareService indexOfObject:service];
    switch (item) {
        case 0:
            [self shareVKontakte];
            break;
        case 1:
            [self shareFacebook];
            break;
        case 2:
            [self shareTwitter];
            break;
        case 3:
            [self shareOdnoklassniki];
            break;
        case 4:
            [self shareWhatsApp];
            break;
        case 5:
            [self shareViber];
            break;
        case 6:
            [self shareTelegram];
            break;
        default:
            break;
    }
}

// Перехватывает возврат в приложение
- (void)onOpenUrl:(NSNotification *) notification {
    NSURL *url = [NSURL URLWithString:[notification.userInfo[@"url"] absoluteString]];
    NSString *source = notification.userInfo[@"sourceApplication"];
    id annotation = notification.userInfo[@"annotation"];
    [connection openUrl:url];
    [VKSdk processOpenURL:url fromApplication:source];
    [[FBSDKApplicationDelegate sharedInstance] application:[UIApplication sharedApplication] openURL:url sourceApplication:source annotation:annotation];
}

#pragma mark -
#pragma mark VK

- (void)initWithID:(NSString *)appId withResult:(void(^)(BOOL isReady))result {
    SCOPE = @[VK_PER_WALL];
    [[VKSdk initializeWithAppId:appId] registerDelegate:share];
    [[VKSdk instance] setUiDelegate:share];
    [VKSdk wakeUpSession:SCOPE completeBlock:^(VKAuthorizationState state, NSError *error) {
        if (state == VKAuthorizationInitialized) {
            [VKSdk authorize:SCOPE];
        } else if (state == VKAuthorizationAuthorized) {
            result (YES);
        } else if (error) {
            UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[[error description] UTF8String]]);
            result (NO);
        }
    }];
}

- (void)shareWithText:(NSString *)text {
    VKShareDialogController *dialog = [VKShareDialogController new];
    [dialog setText:text];
    [dialog setShareLink:[[VKShareLink alloc] initWithTitle:@"Link" link:[NSURL URLWithString:shareUrl]]];
    [dialog setCompletionHandler:^(VKShareDialogController *dialog, VKShareDialogControllerResult result) {
        [UnityGetGLViewController() dismissViewControllerAnimated:YES completion:nil];
    }];
    [UnityGetGLViewController() presentViewController:dialog animated:YES completion:nil];
}

- (void)vkSdkNeedCaptchaEnter:(VKError *)captchaError {
    VKCaptchaViewController *captcha = [VKCaptchaViewController captchaControllerWithError:captchaError];
    [captcha presentIn:UnityGetGLViewController().navigationController.topViewController];
}

- (void)vkSdkTokenHasExpired:(VKAccessToken *)expiredToken {
    [VKSdk authorize:SCOPE];
}

- (void)vkSdkAccessAuthorizationFinishedWithResult:(VKAuthorizationResult *)result {
    if (result.token) {
        [self shareWithText:shareText];
    } else if (result.error) {
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[result.error.description UTF8String]]);
    }
}

- (void)vkSdkUserAuthorizationFailed {
    UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[@"AccessDenied" UTF8String]]);
    [UnityGetGLViewController().navigationController popToRootViewControllerAnimated:YES];
}

- (void)vkSdkShouldPresentViewController:(UIViewController *)controller {
    [UnityGetGLViewController().navigationController.topViewController presentViewController:controller animated:YES completion:nil];
}

#pragma mark -
#pragma mark OK

static OKConnection *connection;

- (void)showOdnoklassnikiShare {
    NSArray *arr = [NSArray arrayWithObjects:[NSDictionary dictionaryWithObjectsAndKeys:@"link", @"type", shareUrl, @"url", nil], [NSDictionary dictionaryWithObjectsAndKeys:@"text", @"type", shareText, @"text", nil], nil];
    NSDictionary *dic = [NSDictionary dictionaryWithObject:arr forKey:@"media"];
    NSData *jsonData = [NSJSONSerialization dataWithJSONObject:dic options:0 error:nil];
    NSString *json = [[NSString alloc] initWithData:jsonData encoding:NSUTF8StringEncoding];
    [self showWidget:@"WidgetMediatopicPost" arguments:[NSDictionary dictionaryWithObject:json forKey:@"st.attachment"] options:@{@"st.popup":@"on", @"st.utext":@"on", @"st.silent":@"on"} success:^(id data) {
    } error:^(NSError *error) {
        [self clearAuth];
        UnitySendMessage([self makeStringCopy:[@"Plugins" UTF8String]], [self makeStringCopy:[@"OnShareError" UTF8String]], [self makeStringCopy:[error.localizedDescription UTF8String]]);
    }];
}

- (BOOL)openUrl:(NSURL *)url {
    return [connection openUrl:url];
}

- (void)initWithSettings:(OKSDKInitSettings *)settings {
    connection = [[OKConnection alloc] initWithSettings: settings];
}

- (void)authorizeWithPermissions:(NSArray *)permissions success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    if(connection) {
        [connection authorizeWithPermissions:permissions success:successBlock error:errorBlock];
    } else {
        errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeNotIntialized userInfo:@{}]);
    }
}

- (void)invokeMethod:(NSString *)method arguments:(NSDictionary *)arguments success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    if(connection) {
        [connection invokeMethod:method arguments:arguments session: true signed: true success:successBlock error:errorBlock];
    } else {
        errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeNotIntialized userInfo:@{NSLocalizedDescriptionKey: OK_SDK_NOT_INIT_COMMON_ERROR}]);
    }
}

- (void)shutdown {
    [connection shutdown];
}

- (void)showWidget:(NSString *)command arguments:(NSDictionary *)arguments options:(NSDictionary *)options success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    if(connection) {
        [connection showWidget:command arguments:arguments options:options success: successBlock error: errorBlock];
    } else {
        errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeNotIntialized userInfo:@{NSLocalizedDescriptionKey: OK_SDK_NOT_INIT_COMMON_ERROR}]);
    }
}

- (void)invokeSdkMethod:(NSString *)method arguments:(NSDictionary *)arguments success:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    if(connection && connection.sdkToken) {
        [connection invokeMethod:method arguments:[@{@"sdkToken":connection.sdkToken} ok_union: arguments] session:true signed: true success:successBlock error:errorBlock];
    } else {
        errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeNotIntialized userInfo:@{NSLocalizedDescriptionKey: @"OKSDK not initialized you should call initWithAppIdAndAppKey and sdkInit first"}]);
    }
}

- (void)sdkInit:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    NSString *deviceId = [[[UIDevice currentDevice] identifierForVendor] UUIDString];
    NSError *error;
    NSString *sessionData = [ @{@"version":@"2",@"device_id":deviceId,@"client_type":@"SDK_IOS",@"client_version":OK_SDK_VERSION} ok_json:error];
    if (error) {
        return errorBlock(error);
    }
    if (connection) {
        [connection invokeMethod:@"sdk.init" arguments:@{@"session_data": sessionData} session: false signed: false success:^(id data) {
            connection.sdkToken = data[@"session_key"];
            successBlock(data);
        } error:errorBlock];
    } else {
        errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeNotIntialized userInfo:@{NSLocalizedDescriptionKey: OK_SDK_NOT_INIT_COMMON_ERROR}]);
    }
}

- (void)getInstallSource:(OKResultBlock)successBlock error:(OKErrorBlock)errorBlock {
    NSString *deviceId = [[[UIDevice currentDevice] identifierForVendor] UUIDString];
    if (connection) {
        [connection invokeMethod:@"sdk.getInstallSource" arguments:@{@"adv_id" : deviceId} session:false signed:false success:^(id data) {
            successBlock(data);
        } error:errorBlock];
    } else {
        errorBlock([NSError errorWithDomain:OK_SDK_ERROR_CODE_DOMAIN code:OKSDKErrorCodeNotIntialized userInfo:@{NSLocalizedDescriptionKey : OK_SDK_NOT_INIT_COMMON_ERROR}]);
    }
}

- (void)clearAuth {
    [connection clearAuth];
}

- (NSString *)currentAccessToken{
    if (connection){
        return connection.accessToken;
    }else{
        return nil;
    }
}

- (NSString *)currentAccessTokenSecretKey{
    if (connection){
        return connection.accessTokenSecretKey;
    }else{
        return nil;
    }
}


#pragma mark -
#pragma mark Interface

static Sharing *share = NULL;

extern "C" {
    
    extern UIViewController *UnityGetGLViewController(); 
    extern void	UnitySendMessage(const char *obj, const char *method, const char *msg); 
    
    void shareVia (const char* service, const char* text, const char* url, const char* params) {
        if (share == NULL)
            share = [[Sharing alloc] init];
        [[NSNotificationCenter defaultCenter] removeObserver:share];
        [[NSNotificationCenter defaultCenter] addObserver:share selector:@selector(onOpenUrl:) name:kUnityOnOpenURL object:nil];
        [share shareVia:[NSString stringWithUTF8String:service] url:[NSString stringWithUTF8String:url] withText:[NSString stringWithUTF8String:text] andParams:[NSString stringWithUTF8String:params]];
    }
    
}

@end
