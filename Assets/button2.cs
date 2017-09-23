using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class button2 : MonoBehaviour {

	public Transform HitFish;

	//public bool ButtonDown = false;//複数ボタン管理するなら別スクリプトに書くべき

	public Vector3 firstLocalPosition;
	public Quaternion firstLocalRotation;

	// Use this for initialization
	void Start () {
		firstLocalPosition = HitFish.transform.localPosition;
		firstLocalRotation = HitFish.transform.localRotation;
	}

	// Update is called once per frame
	void Update () {

	}

	public void onButton2(){
		HitFish.gameObject.SetActive (true);
		//first = HitFish.transform.localPosition;
		//first.x = 0f;
		//first.y = 2.5f;
		//first.z = 0f;
		HitFish.transform.localPosition = firstLocalPosition;
		HitFish.transform.localRotation = firstLocalRotation;
		HitFish.GetComponent<Rigidbody> ().velocity = Vector3.zero;
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
