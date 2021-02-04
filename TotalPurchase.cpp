// Name: Kyle Free
// Date: 1/22/2021
// Course: ITSE 1307
// Description: Total Purchase Recepit Program:
//				Adds the prices of 5 items, then calculates the total
//					plus sales tax.

#include <iostream>
#include <iomanip> // Used to manipulate the input/output stream
#include <string> // used for getline()

int main() {
	// Initialize variables
	std::string userName;
	double item1, item2, item3, item4, item5;
	double taxAmt, subtotal, total;

	// Welcome message
	std::cout << "Please enter your name: ";
	// The following function accepts strings with whitespace into the input stream
	//	with a newline escape character as the default delimiter
	getline(std::cin, userName);

	std::cout << "\nHello, " << userName << "!\nWelcome to the Total Purchase program!\n"
		<< "Please enter the price of five items and the program\n"
		<< "will add up the total and calculate the tax!\n" << std::endl;

	// Get user input and store the information in the variables
	std::cout << "Enter the price of the first item : $";
	std::cin >> item1;

	std::cout << "Enter the price of the second item: $";
	std::cin >> item2;

	std::cout << "Enter the price of the third item:  $";
	std::cin >> item3;

	std::cout << "Enter the price of the fourth item: $";
	std::cin >> item4;

	std::cout << "Enter the price of the fifth item:  $";
	std::cin >> item5;

	std::cout << std::endl;

	// Process information
	subtotal = item1 + item2 + item3 + item4 + item5;
	taxAmt = subtotal * 0.07;
	total = subtotal + taxAmt;

	// Output

	// declares the floatfield to be a fixed-point
	//	and then specifies the precision after the decimal
	std::cout << std::fixed << std::setprecision(2);

	std::cout
		<< "Item 1: $" << item1 << std::endl
		<< "Item 2: $" << item2 << std::endl
		<< "Item 3: $" << item3 << std::endl
		<< "Item 4: $" << item4 << std::endl
		<< "Item 5: $" << item5 << std::endl
		<< "\n"
		<< "Subtotal: $" << subtotal << std::endl
		<< "Tax Amount: $" << taxAmt << std::endl
		<< "Total: $" << total << std::endl;

}