using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RacetScript : MonoBehaviour {

	public Transform EmptyObject;
	private Rigidbody RacetRigid;


	//Vector3 mPosition;
	//Vector3 offset;

	// Use this for initialization
	void Start () {
		//offset = transform.position;
		//RacetRigid = GetComponent<Rigidbody> ();
		//RacetRigid.maxDepenetrationVelocity = 0.1f;
		//RacetRigid.WakeUp();
		//StartCoroutine("fixPosition");
	}
	
	// Update is called once per frame
	void Update () {
		//mPosition = MainCamera.position;
		//Debug.Log (mPosition);


		/*Vector3 a = (EmptyObject.rotation * Quaternion.Inverse (transform.rotation)).eulerAngles;
		a.x = a.x % 360;
		a.y = a.y % 360;
		a.z = a.z % 360;
		RacetRigid.angularVelocity = a / Time.deltaTime;*/


		/*if ((EmptyObject.position - transform.position).magnitude > 0.001f) {
			
		} else {
			RacetRigid.velocity = Vector3.zero;
		}*/

		
		//Debug.Log (RacetRigid.angularVelocity);
		//Debug.Log (EmptyObject.eulerAngles);
		//Debug.Log (transform.eulerAngles);
		//oldPosition = position;


	}

	private IEnumerator fixPosition(){
		while (true) {
			//transform.position = EmptyObject.position;
			//GetComponent<Rigidbody> ().velocity = Vector3.zero;
			//GetComponent<Rigidbody> ().angularVelocity = Vector3.zero;
			//RacetRigid.MoveRotation (EmptyObject.rotation);
			//RacetRigid.velocity = Vector3.zero;
			//Debug.Log ("dサファsd替えがhdsfgsdfhgdfhgaaa");




			yield return new WaitForSeconds (0.1f);
		}
	}

	void FixedUpdate(){
		/*Vector3 v;
		v = (EmptyObject.position - transform.position) / Time.deltaTime;

		Debug.Log ((EmptyObject.position - transform.position).magnitude);

		RacetRigid.velocity = Vector3.ClampMagnitude (v, 1f);

		RacetRigid.MoveRotation (EmptyObject.rotation);*/
	}


}