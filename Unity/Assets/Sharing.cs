// vk, fb, ok, tw, wa, vb, tg
using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;

public class Sharing : MonoBehaviour {

	#if UNITY_IOS
		[DllImport ("__Internal")]
		private static extern void shareVia (string app, string message, string url, string param);
	#endif

	// Поделиться 
	public static void ShareVia (string app, string message, string param = "") {
		#if UNITY_ANDROID
			message = string.Format ("{0} {1}", message, "http://my.url.com"); // добавление ссылки
			using (var plugin = new AndroidJavaClass("com.mycompany.sharing.Plugin")) {
				plugin.CallStatic("shareVia", app, message);
			}
		#elif UNITY_IOS
			shareVia (app, message, "http://my.url.com", param);
		#endif
	}

	// Не удалось расшарить
	void OnShareError (string result) {
		switch (result) {
		case "NotInstall":
			// приложение не установлено
			Debug.Log ("приложение не установлено");
			break;
		case "NotAvailable":
			// шаринг не доступен
			Debug.Log ("шаринг не доступен");
			break;
		case "AccessDenied":
			// нет доступа
			Debug.Log ("нет доступа");
			break;
		default:
			// не удалось расшарить текст
			Debug.Log ("не удалось расшарить");
			break;
		}
	}
}
