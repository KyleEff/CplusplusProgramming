// Kyle Free
// ITSE 1307
// 

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>

using namespace std;

class QuizStudent {

	double num1, num2, result, answer;
	int choice;

	string options[5]{ "Addition", "Subtraction", "Multiplication",
						"Division", "Quit" };

public:
	QuizStudent() {

		// Constuctor Function
		cout
			<< "Welcome to the Math Tutor Program!"
			<< endl;

		do {

			getOptions();
			setOperator();
		} while (choice != 5);
	}

	void setNums() {

		// Assigns random numbers to variables
		srand((int)time(NULL));
		num1 = rand() % 999;
		num2 = rand() % 999;
	}

	void getOptions() {

		// Assigns numbers to num1 and num2
		setNums();

		// This function prints options for the user
		cout
			<< "Here are your options: "
			<< endl;

		for (int i = 0; i < 5; i++) {
			// This loop runs through the options array
			//	and displays the elements as a menu
			cout
				<< i + 1
				<< ". "
				<< options[i]
				<< endl;
		}
	}

	void setOperator() {
		
		// This function sets the operator of the math problem
		//	based on the option that the user chooses
		cout
			<< "\nWhich option would you prefer? ";
		cin >> choice;

		// Input validation
		while (choice < 1 || choice > 5) {

			cout
				<< "Try again!\n"
				<< endl;
			cin >> choice;
		}

		// Checks what the user chose,
		//	prints an operator,
		//	and performs an operation
		switch (choice) {

		case 1:
			cout
				<< num1
				<< " + "
				<< num2
				<< " = ";

			result = num1 + num2;
			getAnswer();
			break;

		case 2:
			cout
				<< num1
				<< " - "
				<< num2
				<< " = ";

			result = num1 - num2;
			getAnswer();
			break;

		case 3:
			cout
				<< num1
				<< " * "
				<< num2
				<< " = ";

			result = num1 * num2;
			getAnswer();
			break;

		case 4:
			cout
				<< num1
				<< " / "
				<< num2
				<< " = ";

			result = num1 / num2;
			getAnswer();
			break;

		default:
			cout
				<< "Thank you for playing!"
				<< endl;

			exit(0);
			break;
		}
	}

	void getAnswer() {

		// Gets an answer to the problem from the user
		//	then compares the user answer to the problem result
		cin >> answer;

		if (answer == result) {

			cout
				<< "Congratulations! That answer is correct!\n"
				<< endl;
		}
		else {

			cout
				<< "The answer is "
				<< result
				<< "! You'll get it next time!\n"
				<< endl;
		}
	}
};
