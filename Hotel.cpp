// Kyle Free
// ITSE 1307
// 2/25/2021
// Hotel.cpp
// This program asks the user for information about the hotel,
//	then calculates the percentage of rooms that are occupied.

#include <iostream>

using namespace std;

int main() {

	// Declare variables
	int
		floors{ 0 },
		rooms{ 0 },
		occupied{ 0 };

	double
		occupiedTotal{ 0.0 },
		unoccupiedTotal{ 0.0 },
		roomTotal{ 0.0 },
		occupiedPercent{ 0.0 };

	// Get the number of floors from the user
	cout
		<< "Enter the number of floors in the hotel building: ";
	cin
		>> floors;

	// Input validation
	while (floors < 1) {

		cout
			<< "ERROR: The number of floors entered is less than 1.\n"
			<< endl
			<< "Enter how many floors in the hotal building: ";
		cin
			>> floors;
	}

	// This loop runs a number of times that is based on the user input
	for (int i = 1; i <= floors; i++) {

		if (i == 13) {
			// Skips the 13th floor
			continue;
		}

		// Get the number of rooms on the floor
		cout
			<< "\nEnter the number of rooms on floor "
			<< i
			<< ": ";
		cin
			>> rooms;

		// Input validation
		while (rooms < 10) {

			cout
				<< "ERROR: The number of rooms entered is less than 10.\n"
				<< endl
				<< "Enter the number of rooms on floor "
				<< i
				<< ": ";
			cin
				>> rooms;
		}

		// Get the number of occupied rooms
		cout
			<< "Enter the number of rooms that are occupied: ";
		cin
			>> occupied;

		// Add the number of rooms to the room total
		roomTotal += rooms;

		// Add the number of occupied rooms to the occupied total
		occupiedTotal += occupied;
	}

	// Finds number of unoccupied rooms
	unoccupiedTotal = roomTotal - occupiedTotal;

	// Finds the percentage of occupied rooms
	occupiedPercent = (occupiedTotal / roomTotal) * 100.0;

	// Output all information
	cout
		<< "\nOccupied Rooms: "
		<< occupiedTotal

		<< "\nUnoccupied Rooms: "
		<< unoccupiedTotal

		<< "\nTotal Rooms: "
		<< roomTotal

		<< "\nOccupied Percentage: "
		<< occupiedPercent
		<< "%"
		<< endl;

	return 0;
}