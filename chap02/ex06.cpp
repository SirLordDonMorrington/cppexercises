#include <iostream>

void lightYearsToAU(double);

int main(void) {
  double ly;
  
  std::cout << "Enter a distance in light years to convert into astronomical units: ";
  std::cin >> ly;
  lightYearsToAU(ly);

  return 0;
}

void lightYearsToAU(double lightYears) {
  std::cout << lightYears << " lightYears are equal to " << lightYears * 63240 << " astronomical units.";
}