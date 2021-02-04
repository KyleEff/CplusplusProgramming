#pragma once

#include <iostream>
#include <iomanip>
#include <string>

class Physics {

	// Initialize variables
	std::string name;
	double mass, velocity, acceleration, height, ke, pe;

public:
	Physics(std::string n, double m, double v,
		double a, double h) {

		// Constructor with arguments
		name = n;
		mass = m;
		velocity = v;
		acceleration = a;
		height = h;

		calcKE();
		calcPE();
		display();
	}

	Physics() {

		// Default constructor
		setName();
		setMass();
		setVelocity();
		setAcceleration();
		setHeight();
		calcKE();
		calcPE();
		display();
	}

	void setName() {
		// Mutator function for name
		std::cout
			<< "Enter the student name: ";
		std::cin >> name;
	}

	std::string getName() {
		// Accessor function for name
		return name;
	}

	void setMass() {
		// Mutator function for mass
		std::cout
			<< "Enter the object's mass in kilograms: ";
		std::cin >> mass;
	}

	double getMass() {
		// Accessor function for mass
		return mass;
	}

	void setVelocity() {
		// Mutator function for velocity
		std::cout
			<< "Enter the object's velocity in meters per second: ";
		std::cin >> velocity;
	}

	double getVelocity() {
		// Accessor function for velocity
		return velocity;
	}

	void setAcceleration() {
		// Mutator function for acceleration
		std::cout
			<< "Enter the object's acceleration: ";
		std::cin >> acceleration;
	}

	double getAcceleration() {
		// Accessor function for acceleration
		return acceleration;
	}

	void setHeight() {
		// Mutator function for height
		std::cout
			<< "Enter the height of the object in meters: ";
		std::cin >> height;
	}

	double getHeight() {
		// Accessor function for height
		return height;
	}
	
	void calcKE() {
		// Mutator function for ke
		ke = ((1.0/2.0) * mass) * (velocity * velocity);
	}

	void calcPE() {
		// Mutator function for ke
		pe = mass * acceleration * height;
	}

	void display() {
		// Accessor function for ke and pe
		//	and final display for the program
		std::cout
			<< getName()
			<< ", your kinetic energy amount is: "
			<< ke
			<< " Jules." << std::endl

			<< "Your potential energy is: "
			<< pe
			<< " Jules." << std::endl;
	}
};
