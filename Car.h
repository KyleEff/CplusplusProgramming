#pragma once
#include <iostream>

using namespace std;

class Car {

	// Class attributes

	int
		yearModel,
		speed{ 0 };

	string
		make;

public:

	Car(int y, string m) {

		// Default constructor

		yearModel = y;
		make = m;
		speed = 0;
	}

	/*********************
	* ACCESSOR FUNCTIONS *
	*********************/

	int getYearModel() {

		return yearModel;
	}

	void printYearModel() {
		
		cout
			<< "Car Year Model: "
			<< getYearModel()
			<< endl;
	}

	string getMake() {

		return make;
	}

	void printMake() {

		cout
			<< "Car Make: "
			<< setw(12)
			<< getMake()
			<< endl;
	}

	int getSpeed() {

		return speed;
	}

	void printSpeed() {

		// This function prints the car's current speed

		cout
			<< getSpeed()
			<< endl;
	}

	/********************
	* MUTATOR FUNCTIONS *
	*********************/

	void accelerate() {

		// This function increases the car's speed by 5

		speed += 5;
	}

	void brake() {

		// If the car is moving, this function reduces
		// the car's speed by 5

		if (speed > 0) 
			speed -= 5;
	}

	void pressGas(int numTimes) {

		// Presses the accelerator the number
		//	of times specified in the argument

		for (int i{ 0 }; i < numTimes; i++) {

			accelerate();
			printSpeed();
		}
	}

	void pumpBrakes(int numTimes) {

		// Presses the brakes the number
		//	of times specified int he argument

		for (int i{ 0 }; i < numTimes; i++) {

			brake();
			printSpeed();
		}
	}

	void setSpeed(int s) {

		// This function set the speed of the car by pressing the 
		// accelerator or brake until the desired speed is reached

		if (s % 5 != 0)

			cout
			<< "ERROR! Speed is not a factor of 5!"
			<< endl;

		if (s > speed) {

			cout
				<< "\nPressing accelerator: "
				<< endl;

			while (speed != s) {

				accelerate();
				printSpeed();
			}
		}

		else {

			cout
				<< "\nPressing brake: "
				<< endl;

			while (speed != s) {

				brake();
				printSpeed();
			}
		}
	}
};
