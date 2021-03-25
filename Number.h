// Kyle Free
// ITSE 1307
// Number Analysis Program
//	Number class
// 3/2/21
// This class can be used to create an object of the Number type

#pragma once
#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

class Number {
	// Initialize attributes
	int
		size{ 0 },
		lowest{ 0 },
		highest{ 0 },
		total{ 0 };

	// ************************
	// NEW VECTOR INSTEAD OF AN ARRAY
	// ************************
	vector<int>
		numbers();

	double
		avg{ 0.0 };

public:
	Number() {
		// Default Constructor

		// NEW FUNCTION CALL
		//setUserNumbers();
		setNumbersFromFile();
		setNumbers();
		getNumbers();
	}

	// *******************
	// NEW MEMBER FUNCTION
	// *******************
	void setUserNumbers() {

		cout
			<< "How many elements do you wish to enter? ";
		cin
			>> size;

		for (int i{ 0 }; i < size; i++)
			cin >> numbers[i];

	}

	void setNumbersFromFile() {
		// Create input file stream object and open it
		ifstream
			numbersFile;

		// Open the input file stream object
		numbersFile.open("ENTER FILE PATH HERE");
		//numbersFile.open("F:\\School\\Spring 2021\\ITSE 1307 - C++ Programming\\Module 6\\Graded Assignment\\numbers.txt");

		if (numbersFile) {
			// This loop inputs the numbers from the file into the array
			for (int i = 0; i < 12; i++)
				numbersFile >> numbers[i];
			// Close the file
			numbersFile.close();
		}
		else {
			// Prints an error message if the file does not open
			cout
				<< "ERROR OPENING THE FILE"
				<< endl;
		}
	}

	void setNumbers() {
		// This loop iterates through the array for the
		//	highest and lowest numbers, the total,
		//	and then calculates the average
		for (int i : numbers) {

			// ***************
			//	THE PRINT STATEMENTS ARE NEW
			// ***************
			cout
				<< i
				<< endl;

			if (i == numbers[0])
				lowest = highest = numbers[0];

			if (i > highest)
				highest = i;

			if (i < lowest)
				lowest = i;

			total += i;
		}
		cout << endl; // ************* NEW *******
		// Calculate average
		avg = total / 12.0;
	}

	void getNumbers() {
		// This function displays all object attribute information
		cout
			<< fixed
			<< setprecision(2)

			<< "Highest: "
			<< highest
			<< endl

			<< "Lowest: "
			<< lowest
			<< endl

			<< "Total: "
			<< total
			<< endl

			<< "Average: "
			<< avg
			<< endl;
	}
};
