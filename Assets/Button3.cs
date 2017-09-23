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
		Racket.position = EmptyObject.position;
		Racket.GetComponent<Rigidbody>().velocity = Vector3.zero;
		Racket.GetComponent<Rigidbody>().angularVelocity = Vector3.zero;
		Debug.Log ("Reset");
	}
	public void mOnButtonDown(){
		transform.parent.GetComponent<ButtonControle>().ButtonDown = true;
		Debug.Log("Down");
	}
	public void mOnButtonUp(){
		transform.parent.GetComponent<ButtonControle>().ButtonDown = false;
		Debug.Log("UP");
	}
}
