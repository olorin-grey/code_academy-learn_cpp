#include <iostream>
#include <cmath>

int main() {
	
	// Declaring variables that hold decimal numbers
	double a, b, c;

	double root1, root2;

	// Initializing
	std::cout << "Welcome to the Quadratic Equation Calculator!\n";
	std::cout << "Enter a: ";
	std::cin >> a;
	
	std::cout << "Enter b: ";
	std::cin >> b;
	
	std::cout << "Enter c: ";
	std::cin >> c;

	root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);
	root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

	// Results output to the screen
  	std::cout << "Root 1 equals " << root1 << "\n";
  	std::cout << "Root 2 equals " << root2 << "\n";

  	return 0;

}