using UnityEngine;
using System.Collections;

public class App : MonoBehaviour {

	// Название приложенияы
	public static string Name {
		get {
			return "test";
		}
	}

	// ID приложения для шаринга в ФБ
	public static string FacebookAppId {
		get {
			return "000";
		}
	}

	// ID приложения для шаринга в ВК
	public static string VKontakteAppId {
		get {
			return "000";
		}
	}

	// ID приложения для шаринга в Одноклассниках
	public static string OdnoklassnikiAppId {
		get {
			return "000";
		}
	}

	// Secret ID приложения для шаринга в Одноклассниках
	public static string OdnoklassnikiSecretId {
		get {
			return "000";
		}
	}
}
