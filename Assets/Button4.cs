using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Button4 : MonoBehaviour {

	// Use this for initialization
	void Start () {
		transform.parent.GetComponent<ButtonControle> ().onEditMode = true;
		GetComponentInChildren<Text>().text = "EditMode";
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void mOnButtonDown(){
		transform.parent.GetComponent<ButtonControle>().buttonDown = true;
		//Debug.Log("4Down");
	}
	public void mOnButtonUp(){
		transform.parent.GetComponent<ButtonControle>().buttonDown = false;
		//Debug.Log("4UP");
	}

	public void mOnButtonClick(){
		if (transform.parent.GetComponent<ButtonControle> ().onEditMode == true) {
			transform.parent.GetComponent<ButtonControle> ().onEditMode = false;
			GetComponentInChildren<Text>().text = "GameMode";
		} else {
			transform.parent.GetComponent<ButtonControle> ().onEditMode = true;
			GetComponentInChildren<Text>().text = "EditMode";

		}
	}
}