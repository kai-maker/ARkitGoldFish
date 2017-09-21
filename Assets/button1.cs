using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class button1 : MonoBehaviour {

	public Transform HitCube;

	public bool ButtonDown = false;//複数ボタン管理するなら別スクリプトに書くべき

	public Vector3 first;

	// Use this for initialization
	void Start () {
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	public void onButton1(){
		HitCube.gameObject.SetActive (true);
		first = HitCube.transform.localPosition;
		first.x = 0f;
		first.y = 1.15f;
		first.z = 0f;
		HitCube.transform.localPosition = first;
	}
	public void mOnButtonDown(){
		ButtonDown = true;
		Debug.Log("Down");
	}
	public void mOnButtonUp(){
		ButtonDown = false;
		Debug.Log("UP");
	}
}
