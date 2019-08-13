#include <iostream>

int main()
{

	// Declaring an integer and setting it to zero
	int score = 0;

	// Commenting out this return code for now.
	// return 0;

	// Creating user input and feedback function
	std::cout << "Enter the number of points scored: ";
	std::cin >> score;
	
	// Chaining cout statement
	std::cout << "Team UnderHill now has " << score << "points.\n";
	
}