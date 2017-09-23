using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cube : MonoBehaviour {

	private Rigidbody mRigidbody;

	public Transform HitObjectsParent;

	public Transform Racket,MainCamera;

	// Use this for initialization
	void Start () {
		//mRigidbody.maxDepenetrationVelocity = 1f;
	}

	void Update(){
		//transform.localScale = new Vector3(0.03f,0.03f,0.03f);
	}
	
	// Update is called once per frame
	void FixedUpdate () {
		mRigidbody = GetComponent<Rigidbody> ();
		mRigidbody.WakeUp ();
	}

	void OnCollisionEnter(Collision col) {
		if (col.gameObject.tag == "Front") {
			Debug.Log("FrontEnter");
			transform.SetParent(MainCamera);
		}

		if (col.gameObject.tag == "Rear") {
			Debug.Log("RearEnter");
			//transform.SetParent(MainCamera);
		}
		/*if (col.gameObject.tag == "pool") {
			Debug.Log("poolEnter");
			transform.SetParent(HitObjectsParent);
		}*/
	}

	void OnCollisionExit(Collision col) {
		if (col.gameObject.tag == "Front") {
			transform.SetParent(HitObjectsParent);
			Debug.Log("FrontExit");
		}
		if (col.gameObject.tag == "Rear") {
			Debug.Log("RearExit");
			//transform.SetParent(MainCamera);
		}
		/*if (col.gameObject.tag == "pool") {
			Debug.Log("poolExit");
			transform.SetParent(MainCamera);
		}*/
	}
}
