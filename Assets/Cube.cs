using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube : MonoBehaviour {

	private Rigidbody mRigidbody;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		mRigidbody = GetComponent<Rigidbody> ();
		mRigidbody.WakeUp ();
	}
}
