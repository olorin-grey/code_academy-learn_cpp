#include <iostream>

int main() {
  
  double p, r, s;
  
  double dollars;

std::cout << "Enter the number of Columbian Pesos: ";
std::cin >> p;
// 1 pesos = 0.05
  
std::cout << "Enter the number of Brazilian Reais: ";
std::cin >> r;
// 1 reais = 0.25 dollars

std::cout << "Enter the number of Peruvian Soles: ";
std::cin >> s;
// 1 sole = 0.3 dollars
  
// Currency calculator
  dollars = 0.05 * p + 0.25 * r + 0.3 * s;
  
std::cout << "Total USD = $" << dollars << "\n";
  
}