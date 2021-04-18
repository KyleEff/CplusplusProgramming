/*
Kyle Free
ITSE 2331
3/29/2021
This program creates and demonstrates
	a car object and its member functions
*/

#include <iostream>
#include <iomanip>
#include "Car.h"

using namespace std;

int main() {

	Car myCar(2017, "Impala");

	myCar.printMake();
	myCar.printYearModel();

	cout
		<< "\nStarting Speed: ";

	myCar.printSpeed();

	//myCar.pressGas(5);
	//myCar.pumpBrakes(5);

	myCar.setSpeed(25);
	myCar.setSpeed(0);
}