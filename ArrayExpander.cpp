// Kyle Free
// ITSE 1307
// 3/25/2021
// Array Exapander
//	This program uses pointers to double the length of an array

#include <iostream>

using namespace std;

void setNumbers(int nums[], const int SIZE);
void displayNumbers(int nums[], const int SIZE);

int* expander(int nums[], const int SIZE);
void displayExpanded(int* numsDoubled, const int SIZE);

int main() {

	// Declare constant
	const int SIZE{ 7 };

	// Declare array using the constant variable 
	int nums[SIZE];

	// Sets the numbers in the array
	setNumbers(nums, SIZE);

	// Displays the numbers of the array
	displayNumbers(nums, SIZE);

	cout << endl;

	// This statement assigns the pointer to the memory
	//	that is allocated for the expanded array
	int* numsDoubled = expander(nums, SIZE);

	// Displays the expanded array
	displayExpanded(numsDoubled, SIZE);

	// The delete operator deletes the memory allocated by the new operator
	delete[] numsDoubled;

	return 0;
}

void setNumbers(int nums[], const int SIZE) {

	// This function sets the numbers in the array
	//	specified in the argument to the correct size

	srand((int)rand());

	for (int i{ 0 }; i < SIZE; i++)
		nums[i] = rand() % 100;
}

void displayNumbers(int nums[], const int SIZE) {

	// This function displays the numbers in the array

	cout
		<< "Array contents before expansion: "
		<< endl;

	for (int i{ 0 }; i < SIZE; i++)
		cout
		<< nums[i]
		<< endl;
}

int* expander(int nums[], const int SIZE) {

	// This function allocates an amount of memory that is double
	//	the amount of the original array, then returns a pointer to the memory

	const int NEW_SIZE = SIZE * 2;

	// The "new" keyword allocates memory based on the data type
	// This statement assigns a pointer to a new allocated amount of memory
	int* newNums = new int[NEW_SIZE];

	for (int i{ 0 }, j{ SIZE }; i < SIZE; i++, j++)                              {

		*(newNums + i) = nums[i];
		*(newNums + j) = 0;
	}

	return newNums;
}

void displayExpanded(int* numsDoubled, const int SIZE) {

	// This function displays the expanded array using a pointer

	cout
		<< "Array contents after expansion: "
		<< endl;

	for (int i{ 0 }; i < SIZE * 2; i++)
		cout
		<< *(numsDoubled + i)
		<< endl;
}
