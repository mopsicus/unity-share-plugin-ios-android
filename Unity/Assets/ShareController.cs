using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ShareController : MonoBehaviour {

	public void ShareIt (string app) {
		if (app != "ok")
			Sharing.ShareVia (app, "Hi from Unity!");
		else
			Sharing.ShareVia (app, "Hi from Unity!", string.Format("{0};{1}", App.OdnoklassnikiAppId, App.OdnoklassnikiSecretId));
	}
}
