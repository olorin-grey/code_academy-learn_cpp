#include <iostream>

int main()
{

	// Declaring double variable to store user input
	double tempf = 0;

	// Initializing
 	std::cout << "Hello! Enter the temperature in Fahrenheit: ";
 	std::cin >> tempf;
 	std::cout << "Thank you!\n";

 	// Converting Fahrenheit to Celsius
 	double tempc = (tempf - 32) / 1.8;
 	
	// Outputting 
 	std::cout << "The temp is " << tempc << " degrees Celsius.\n";
	
}