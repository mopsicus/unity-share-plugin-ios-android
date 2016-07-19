using UnityEngine;
using UnityEditor;
using UnityEditor.Callbacks;
using System.Collections;
using System.IO;
using UnityEditor.iOS.Xcode;
using System.Collections.Generic;

public class iOSPostBuildProcess {

	[PostProcessBuild]
	public static void iOSPostProcess(BuildTarget buildTarget, string pathToBuiltProject) {
		if (buildTarget == BuildTarget.iOS) {
			FixPlist (pathToBuiltProject);
			AddFrameworks (pathToBuiltProject);
		}
	}

	// Добавляем параметры в Info.plist
	private static void FixPlist (string path) {
		string plistPath = path + "/Info.plist";
		PlistDocument plist = new PlistDocument();
		plist.ReadFromString(File.ReadAllText(plistPath));
		PlistElementDict rootDict = plist.root;
		rootDict.SetString("FacebookAppID", App.FacebookAppId);
		rootDict.SetString("FacebookDisplayName", App.Name);
		PlistElementArray queriesSchemes = rootDict.CreateArray("LSApplicationQueriesSchemes");
		queriesSchemes.AddString("fb");
		queriesSchemes.AddString("fbapi");
		queriesSchemes.AddString("fbapi20130214");
		queriesSchemes.AddString("fbapi20130410");
		queriesSchemes.AddString("fbapi20130702");
		queriesSchemes.AddString("fbapi20131010");
		queriesSchemes.AddString("fbapi20131219");
		queriesSchemes.AddString("fbapi20140410");
		queriesSchemes.AddString("fbapi20140116");
		queriesSchemes.AddString("fbapi20150313");
		queriesSchemes.AddString("fbapi20150629");
		queriesSchemes.AddString("fbauth");
		queriesSchemes.AddString("fbauth2");
		queriesSchemes.AddString("fbshareextension");
		queriesSchemes.AddString("fb-messenger-api20140430");
		queriesSchemes.AddString("vk");
		queriesSchemes.AddString("vk-share");
		queriesSchemes.AddString("vkauthorize");
		queriesSchemes.AddString("viber");
		queriesSchemes.AddString("whatsapp");
		queriesSchemes.AddString("tg");
		queriesSchemes.AddString("okauth");
		queriesSchemes.AddString(string.Format("ok{0}", App.OdnoklassnikiAppId));
		PlistElementArray typesArray = rootDict.CreateArray("CFBundleURLTypes");
		PlistElementDict urlsDict = typesArray.AddDict();
		PlistElementArray urlsArray = urlsDict.CreateArray("CFBundleURLSchemes");
		urlsArray.AddString(string.Format("vk{0}", App.VKontakteAppId));
		urlsArray.AddString(string.Format("fb{0}", App.FacebookAppId));
		urlsArray.AddString(string.Format("ok{0}", App.OdnoklassnikiAppId));
		File.WriteAllText(plistPath, plist.WriteToString());
	}

	// Подключаем сторонние фреймворки
	private static void AddFrameworks(string path) {
		string projPath = path + "/Unity-iPhone.xcodeproj/project.pbxproj";
		PBXProject proj = new PBXProject();
		var file = File.ReadAllText(projPath);
		proj.ReadFromString(file);
		string target = proj.TargetGuidByName("Unity-iPhone");
		List<string> frameworks = new List<string>();
		frameworks.Add("FBSDKCoreKit.framework");
		frameworks.Add("FBSDKShareKit.framework");
		frameworks.Add("VKSdkFramework.framework");
		frameworks.Add("VKSdkResources.bundle");	
		foreach (string framework in frameworks) {
			CopyAndReplaceDirectory("Frameworks/" + framework, Path.Combine(path, "Frameworks/" + framework));
			string name = proj.AddFile("Frameworks/" + framework, "Frameworks/" + framework, PBXSourceTree.Source);
			proj.AddFileToBuild(target, name);
		}
		proj.SetBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "$(inherited)");
		proj.AddBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "$(PROJECT_DIR)/Libraries");
		AddUsrLib(proj, target, "libc++.dylib");
		AddUsrLib(proj, target, "libz.dylib");
		proj.SetBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "$(SRCROOT)/Frameworks");
		proj.AddBuildProperty(target, "FRAMEWORK_SEARCH_PATHS", "$(inherited)");
		proj.AddBuildProperty(target, "OTHER_LDFLAGS", "-ObjC");
		File.WriteAllText(projPath, proj.WriteToString());
	}

	static void AddUsrLib(PBXProject proj, string targetGuid, string framework){
		string fileGuid = proj.AddFile("usr/lib/"+framework, "Frameworks/"+framework, PBXSourceTree.Sdk);
		proj.AddFileToBuild(targetGuid, fileGuid);
	}

	static void CopyAndReplaceDirectory(string sourcePath, string distinationPath) {
		if (Directory.Exists(distinationPath))
			Directory.Delete(distinationPath);
		if (File.Exists(distinationPath))
			File.Delete(distinationPath);
		Directory.CreateDirectory(distinationPath);
		foreach (var file in Directory.GetFiles(sourcePath))
			File.Copy(file, Path.Combine(distinationPath, Path.GetFileName(file)));
		foreach (var dir in Directory.GetDirectories(sourcePath))
			CopyAndReplaceDirectory(dir, Path.Combine(distinationPath, Path.GetFileName(dir)));
	}


}