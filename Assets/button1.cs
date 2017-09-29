using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class button1 : MonoBehaviour {

	public Transform HitCube;

	//public bool ButtonDown = false;//複数ボタン管理するなら別スクリプトに書くべき

	public Vector3 firstLocalPosition;
	public Quaternion firstLocalRotation;

	// Use this for initialization
	void Start () {
		firstLocalPosition = HitCube.transform.localPosition;
		firstLocalRotation = HitCube.transform.localRotation;
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void onButton1(){
		HitCube.gameObject.SetActive (true);
		HitCube.transform.localPosition = firstLocalPosition;
		HitCube.transform.localRotation = firstLocalRotation;
		HitCube.GetComponent<Rigidbody> ().velocity = Vector3.zero;

	}
	public void mOnButtonDown(){
		transform.parent.GetComponent<ButtonControle>().buttonDown = true;
		//Debug.Log("Down");
	}
	public void mOnButtonUp(){
		transform.parent.GetComponent<ButtonControle>().buttonDown = false;
		//Debug.Log("UP");
	}
}
