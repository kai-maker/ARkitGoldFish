//
// Author: Suburbia Games
// Version: 1.0
//

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FishMovement : MonoBehaviour {

	//
	// Global public variables
	//
	[SerializeField] public float maxVelocity = 0.12f;									// max velocity of the fish movement
	[Range(0.0f, 100.0f)] [SerializeField] public float movementProbability = 60.0f;	// movement probability on each iteration
	[Range(0.0f, 100.0f)] [SerializeField] public float rotationProbability = 70.0f; 	// rotation probability on each iteration
	[SerializeField] public float maxTopPosition = 3.0f;								// max top position of the fish
	[SerializeField] public float minDistanceBottom = 0.5f;								// max distance to the bottom of the terrain	

	//
	// Global private variables
	//
	private float fishScale = 0f;				
	private float fishMovement = 0f;
	private float fishRotation = 0f;
	private float applyMovement = 0f;			// movement to apply to the fish
	private float applyRotation = 0f;			// rotation to apply to the fish
	private float fishVelocity = 0f;
	private bool isColliding = false;			// the fish is colliding with another object
	private bool closeToCollide = false;		// the fish is close to collide with another object
	private float currentPositionTop = 0f;		// current top position of the fish 
	private float conditionRotation = 0f;	   	// 0 = no condition; -1 = negative rotation; 1 = positive rotation
	private float currentDistanceTop = 0f;	   	// current distance between the fish to the top of water
	private float currentDistanceBottom = 0f; 	// current distance between the fish to the bottom of terrain
	private float currentDistanceLeft = 0f;		// current distance between the fish to the left terrain or another objects
	private float currentDistanceRight = 0f;	// current distance between the fish to the right terrain or another objects
	private float upDownMovements = 0f;	   		// num. of iterations to move up or down
	private float goUpDown = 0f;				// if < 0 = move down; if > 1 = move up; else = no move (vertically)
	private float ratioScale = 20f;				// ratio to calculate the distances in relation to the fish's scale
	private Animator fishAnimator;
	private CharacterController fishController;
	private Collider fishCollider;

	//
	// Use this for initialization
	//
	void Start () {
		// get basic variables of the fish object
		fishScale = this.transform.localScale.x;

		// get the Animator component of the object
		fishAnimator = GetComponent<Animator>();
		if (fishAnimator == null) {
			Debug.LogWarning("The Fish hasn't got an attached Animator component!");
		}

		// get the Collider sensor of the object
		fishCollider = this.transform.Find("sensor").GetComponent<BoxCollider>();
		if (fishCollider == null) {
			Debug.LogWarning("The Fish hasn't got a 'sensor' child object with an attached Box Collider component!");
		}
		else {
			// set isTrigger to true by default
			fishCollider.isTrigger = true;
		}

		// get the CharacterController component of the object
		fishController = GetComponent<CharacterController>();
		if (fishController == null) {
			Debug.LogWarning("The Fish hasn't got an attached CharacterController component!");
		}
		else {
			// initialize movement iterations
			InvokeRepeating("moveFishIteration", 0, 0.5f);		// execute each 0.5 seconds
			
			// initialize collision detection
			InvokeRepeating("detectRemoteObjects", 0, 0.5f);	// execute each 0.5 seconds
		}
	}
	
	//
	// Update is called once per frame
	//
	void Update () {
		// apply the movement to the fish
		moveFish();
	}

	//
	// Movement of the fish
	//
	void moveFish () {
		float moveUpDown = 0f;
		Vector3 moveDirection;
		
		// get velocity of the fish
		fishVelocity = new Vector3(fishController.velocity.x, 0, fishController.velocity.z).magnitude / (fishScale * 30f / ratioScale);

		// adjust speed animation depending on the fish velocity
		if (fishAnimator != null) {
			fishAnimator.speed = fishVelocity / maxVelocity + 0.3f;
		}

		// USE ONLY WHEN YOU NEED DEBUG (rename the fish object to 'Fishm' to view debug variables in the console of Unity)
		if (this.name == "Fishm") {
			Debug.Log("Velocity: " + fishVelocity.ToString("F2") + ", Movement: " + fishMovement.ToString("F2") + " [" + applyMovement.ToString("F2") + "], Rotation: " + fishRotation.ToString("F2") + " [" + applyRotation.ToString("F2") + "][" + conditionRotation + "], DistanceTop: " + currentDistanceTop.ToString("F2") + ", closeToCollide: " + closeToCollide + ", isColliding: " + isColliding);
		}

		// fish top position
		currentPositionTop = transform.position.y;
		
		// fish movement
		// (horizontal)
		if (fishVelocity < maxVelocity && applyMovement > 0f) {
			fishMovement += (fishScale * 3f / ratioScale) * Time.deltaTime;
			applyMovement -= (fishScale * 3f / ratioScale) * Time.deltaTime;
			if (applyMovement < 0f) {
				applyMovement = 0f;
			}
		}
		else if (fishVelocity > maxVelocity * 1.25) {
			fishMovement = 0f;
		}
		if (isColliding == true) {
			fishMovement -= (fishScale * 25f / ratioScale) * Time.deltaTime;
		}
		else if (closeToCollide == true) {
			fishMovement -= (fishScale * 10f / ratioScale) * Time.deltaTime;
			if (fishMovement < (fishScale * 1.5f / ratioScale)) {
				fishMovement = (fishScale * 1.5f / ratioScale);
			}
		}
		if (fishMovement < 0f) {
			fishMovement = 0f;
		}
		// (vertical)
		if (fishMovement > (fishScale * 1.5f / ratioScale)) {
			if (upDownMovements <= 0 && currentDistanceBottom > minDistanceBottom && currentPositionTop < maxTopPosition) {
				upDownMovements = Random.Range(1f, 10f);
				goUpDown = Random.Range(-2.5f, 2.5f);
			}
			
			if ((goUpDown < -1.5f && currentDistanceBottom > minDistanceBottom) || currentPositionTop >= maxTopPosition) {
				// go down
				moveUpDown = Random.Range(-0.04f, -0.01f);
			}
			if ((goUpDown > 1.5f && currentPositionTop < maxTopPosition) || (currentPositionTop < maxTopPosition && currentDistanceBottom <= minDistanceBottom)) {
				// go up
				moveUpDown = Random.Range(0.01f, 0.04f);
			}
			upDownMovements = upDownMovements - Time.deltaTime;
		}
		moveDirection = transform.TransformDirection(new Vector3(0, moveUpDown * fishScale * Time.deltaTime, fishMovement * Time.deltaTime));
		fishController.Move(moveDirection);
		
		// fish rotation
		if (applyRotation > 0f) {
			if (applyRotation > 10f)  {
				if (isColliding == true) 		 fishRotation = 20f * Time.deltaTime;
				else if (closeToCollide == true) fishRotation = 15f * Time.deltaTime;
				else 					 		 fishRotation = 10f * Time.deltaTime;
			}
			else {
				fishRotation = applyRotation * Time.deltaTime;
			}
			applyRotation -= fishRotation;
			if (applyRotation < 0f) {
				applyRotation = 0f;
			}
		}
		else if (applyRotation < 0f) {
			if (applyRotation < -10f)  {
				if (isColliding == true) 		 fishRotation = -20f * Time.deltaTime;
				else if (closeToCollide == true) fishRotation = -15f * Time.deltaTime;
				else					 		 fishRotation = -10f * Time.deltaTime;
			}
			else {
				fishRotation = applyRotation * Time.deltaTime;
			}
			applyRotation -= fishRotation;
			if (applyRotation > 0f) {
				applyRotation = 0f;
			}
		}
		else {
			fishRotation = 0f;
		}
		
		if (fishRotation > 0f && fishMovement == 0f) {
			fishMovement = Random.Range(0f, (fishScale * 0.5f / ratioScale));
		}
		transform.Rotate(0, fishRotation, 0);
	}

	//
	// Iterations of the fish
	//
	void moveFishIteration () {
		float randomIteration;
		float rotateMin = 0f;
		float rotateMax = 0f;
		
		// fish movement
		randomIteration = Random.Range(0.0f, 100.0f);
		if (randomIteration <= movementProbability && fishMovement <= (fishScale * 15f / ratioScale)) {
			applyMovement = Random.Range(2f, 15f);
		}
		
		// fish rotation
		randomIteration = Random.Range(0.0f, 100.0f);
		if ((randomIteration <= rotationProbability && applyRotation <= 15f && applyRotation >= -15f) || conditionRotation != 0f) {
			if (conditionRotation < 0f && (currentDistanceLeft > (fishScale * 10f / ratioScale) || currentDistanceRight < (fishScale * 5f / ratioScale))) {
				// we force the move to the left
				applyRotation = Random.Range(-55f, -30f);
			}
			else if (conditionRotation > 0f && (currentDistanceRight > (fishScale * 10f / ratioScale) || currentDistanceLeft < (fishScale * 5f / ratioScale))) {
				// we force the move to the right
				applyRotation = Random.Range(30f, 55f);
			}
			else {
				// move to the left or to the right
				if (currentDistanceLeft > (fishScale * 10f / ratioScale)) {
					rotateMin = -55f;
				}
				if (currentDistanceRight > (fishScale * 10f / ratioScale)) {
					rotateMax = 55f;
				}
				applyRotation = Random.Range(rotateMin, rotateMax);
			}
			conditionRotation = 0f;
		}
	}

	//
	// Detecting other objects around the fish
	//
	void detectRemoteObjects() {
		RaycastHit hit;
		bool colliderDetect;
		Vector3 fishColliderPosition;

		// get values of collider (act as a sensor)
		fishColliderPosition = fishCollider.bounds.center;
		
		// detect front objects
		colliderDetect = Physics.Raycast(fishColliderPosition, transform.rotation * new Vector3(0, 0, 1), out hit, (fishScale * 100f / ratioScale));
		if (colliderDetect == true) {
			if (hit.distance < (fishScale * 0.5f / ratioScale)) {
				// fish is colliding
				fishColliding(true, true);
			}
			else if (hit.distance < (fishScale * 25f / ratioScale)) {
				// close to collide
				fishColliding(true, false);
			}
			else {
				// no collision
				fishColliding(false, false);
			}
		}
		else {
			// no collision
			fishColliding(false, false);
		}

		// detecting extra colliding situation
		if (fishMovement > 0f && fishVelocity < 0.01f) {
			fishColliding(true, true);
		}

		// USE ONLY WHEN YOU NEED DEBUG (rename the fish object to 'Fishc' to view debug variables in the console of Unity)
		if (this.name == "Fishc") {
			Debug.Log("Distance front: " + hit.distance.ToString("F2") + ", Distance top: " + currentDistanceTop.ToString("F2") + ", Distance bottom: " + currentDistanceBottom.ToString("F2") + ", Distance left: " + currentDistanceLeft.ToString("F2") + ", Distance right: " + currentDistanceRight.ToString("F2"));
		}
		
		// get the distance to the top
		colliderDetect = Physics.Raycast(transform.position, new Vector3(0, 1, 0), out hit, (fishScale * 100f / ratioScale));
		if (colliderDetect == true) {
			currentDistanceTop = hit.distance;
		}
		else {
			currentDistanceTop = 9999f;
		}
		
		// get the distance to the bottom
		colliderDetect = Physics.Raycast(transform.position, new Vector3(0, -1, 0), out hit, (fishScale * 100f / ratioScale));
		if (colliderDetect == true) {
			currentDistanceBottom = hit.distance;
		}
		else {
			currentDistanceBottom = 9999f;
		}
		
		// get the distance of the left objects
		colliderDetect = Physics.Raycast(fishColliderPosition, transform.rotation * new Vector3(-1, 0, 0), out hit, (fishScale * 100f / ratioScale));
		if (colliderDetect == true) {
			currentDistanceLeft = hit.distance;
		}
		else {
			currentDistanceLeft = 9999f;
		}
		
		// get the distance of the right objects
		colliderDetect = Physics.Raycast(fishColliderPosition, transform.rotation * new Vector3(1, 0, 0), out hit, (fishScale * 100f / ratioScale));
		if (colliderDetect == true) {
			currentDistanceRight = hit.distance;
		}
		else {
			currentDistanceRight = 9999f;
		}
	}

	//
	// Fish is colliding with another objects
	//
	void fishColliding(bool _closeToCollide, bool _isColliding) {
		isColliding = _isColliding;
		closeToCollide = _closeToCollide;
		if (isColliding == true || closeToCollide == true) {
			if (currentDistanceRight >= currentDistanceLeft) {
				conditionRotation = 1f; 	// continue rotation to the right
			}
			else {
				conditionRotation = -1f; 	// continue rotation to the left
			}
		}
		else {
			conditionRotation = 0f;			// rotation to the left or to the right
		}
	}
}
