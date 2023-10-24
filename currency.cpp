#include <iostream>

using namespace std;

int main() {
  double pesos, reais, soles = 0;
  double dollars = 0;

  std::cout << "Enter number of Colombian Pesos: "; 
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // Pesos conversion rate: 0,00024;
  // Reais conversion rate: 0,20;
  // Soles conversion rate: 0,26;
  dollars = (0.00024 * pesos + 0.20 * reais + 0.26 * soles);

  std::cout << "Total USD = $" << dollars << "\n";
}