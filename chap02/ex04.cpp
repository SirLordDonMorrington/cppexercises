#include <iostream>

int main(void) {
  int yearsOld;

  std::cout << "Enter your age: ";
  std::cin >> yearsOld;
  std::cout << "Your age in months is " << yearsOld * 12 << ".";

  return 0;
}