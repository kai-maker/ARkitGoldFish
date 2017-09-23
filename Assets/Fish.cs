using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Fish : MonoBehaviour {

	private Rigidbody mRigidbody;

	// Use this for initialization
	void Start () {
		//GetComponent<Rigidbody> ().maxDepenetrationVelocity = 1f;

	}
	
	// Update is called once per frame
	void Update () {
		
	}

	void FixedUpdate () {
		mRigidbody = GetComponent<Rigidbody> ();
		mRigidbody.WakeUp ();
	}

	void OnCollisionEnter(Collision col) {
		if (col.gameObject.tag == "Racket") {
			transform.SetParent(col.transform);
		}
	}

	void OnCollisionExit(Collision col) {
		if (col.gameObject.tag == "Racket") {
			transform.SetParent(null);
		}
	}
}
