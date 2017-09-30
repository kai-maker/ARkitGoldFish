using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonControle : MonoBehaviour {

	public bool dontSet = false;
	public bool buttonDown = false;
	public bool onEditMode = false;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		//dontSet = buttonDown || (!onEditMode);
	}
}
