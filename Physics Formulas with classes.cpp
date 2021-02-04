#include <iostream>
#include <iomanip>
#include <locale>

class Object {

	// Initialize variables
	double mass, velocity, height, g;

	// gravity = 9.8 meters per second squared
	double accel{ g * g };

public:
	void getObjectMass() {
		
		std::cout
			<< "Enter the mass of the object in kilograms: ";
		std::cin >> mass;

	}

	double getKineticEnergy() {

		// Kinetic Energy = ((1.0 / 2.0) * mass) * velocity squared
		double kineticEnergy{ (0.5 * mass) * (velocity * velocity) };

		std::cout
			<< "The kinetic energy of an object is calculated by\n"
			<< "multiplying half the mass times the velocity squared.\n"
			<<std::endl;

		// Get user input and the assign the input to variables
		getObjectMass();

		std::cout
			<< "Enter the velocity of the object in meters per second: ";
		std::cin >> velocity;

		std::cout << std::fixed << std::setprecision(2)
			<< "\nThe kinetic energy of the object is "
			<< kineticEnergy
			<< " Jules. \n" << std::endl;

		return kineticEnergy;
	}

	double getPotentialEnergy() {

		// Potential Energy = mass * acceleration * height
		double potentialEnergy{ mass * accel * height };

		if (mass == 0) {

			getObjectMass();

		}

		// Continue with gathering user input
		//	to be used for the potential energy formula
		std::cout
			<< "\nThe potential energy of an object is calculated by\n"
			<< "Multiplying the mass times the height and acceleration.\n"\
			<< std::endl;

		std::cout
			<< "Enter the height of the object in meters: ";
		std::cin >> height;

		std::cout
			<< "\nThe acceleration of an object due to gravity\n"
			<< "at sea level is 9.8 meters per second squared.\n"
			<< "Enter the acceleration of the object in meters per second: ";
		std::cin >> g;

		std::cout << std::fixed << std::setprecision(2)
			<< "\nThe potential energy of the object is "
			<< potentialEnergy
			<< " Jules. \n" << std::endl;

		return potentialEnergy;
	}
};

void welcomeMessage() {
	// Welcome message
	std::cout
		<< "Welcome to the Physics Formulas Program!\n"
		<< "This program will ask for information about the object in question,\n"
		<< "and then calculate the object's kinetic and potential energies!\n"
		<< std::endl;
}

int main() {

	welcomeMessage();

	// Create an object
	Object myObject;

	// Call function and return the object's kinetic energy
	myObject.getKineticEnergy();

	// Call function and return the object's potential energy
	myObject.getPotentialEnergy();

	return 0;
}
