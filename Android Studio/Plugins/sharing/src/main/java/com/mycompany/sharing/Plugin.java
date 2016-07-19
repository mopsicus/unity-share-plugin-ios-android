package com.mycompany.sharing;

import com.unity3d.player.UnityPlayer;

import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.content.pm.PackageManager.NameNotFoundException;
import android.widget.Toast;

public class Plugin {

    private enum AppType {vk, fb, ok, tw, wa, vb, tg};	// Через какие приложения можно шарить

    // Интерфейс
    public static void shareVia(String app, String message) {
        String appName = null;
        AppType type = AppType.valueOf(app);
        switch (type) {
            case vk:
                appName = "com.vkontakte.android";
                break;
            case fb:
                appName = "com.facebook.katana";
                break;
            case ok:
                appName = "ru.ok.android";
                break;
            case tw:
                appName = "com.twitter.android";
                break;
            case wa:
                appName = "com.whatsapp";
                break;
            case vb:
                appName = "com.viber.voip";
                break;
            case tg:
                appName = "org.telegram.messenger";
                break;
            default:
                break;
        }
        if (appName != null)
            share(appName, message);
    }

    // Расшарить с помощью приложения
    static void share(String appName, String msgText) {
        Context context = UnityPlayer.currentActivity.getApplicationContext();
        final boolean isAppInstalled = isAppAvailable(context, appName);
        if (isAppInstalled) {
            Intent myIntent = new Intent(Intent.ACTION_SEND);
            myIntent.setType("text/plain");
            myIntent.setPackage(appName);
            myIntent.putExtra(Intent.EXTRA_TEXT, msgText);//
            UnityPlayer.currentActivity.startActivity(Intent.createChooser(myIntent, "Поделиться с помощью"));
        }
        else {
            UnityPlayer.currentActivity.runOnUiThread(new Runnable() {
                @Override
                public void run() {
                    Toast.makeText(UnityPlayer.currentActivity, "Приложение не установлено", Toast.LENGTH_SHORT).show();
                }
            });
        }
    }

    // Проверить установлено ли приложение
    public static boolean isAppAvailable(Context context, String appName) {
        PackageManager pm = context.getPackageManager();
        try {
            pm.getPackageInfo(appName, PackageManager.GET_ACTIVITIES);
            return true;
        } catch (NameNotFoundException e) {
            return false;
        }
    }

}
