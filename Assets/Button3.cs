using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Button3 : MonoBehaviour {
	public Transform Racket;
	public Transform EmptyObject;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void mOnButtonClick(){
	}
	public void mOnButtonDown(){
		transform.parent.GetComponent<ButtonControle>().buttonDown = true;
		//Debug.Log("3Down");
	}
	public void mOnButtonUp(){
		transform.parent.GetComponent<ButtonControle>().buttonDown = false;
		//Debug.Log("3UP");
	}
}
