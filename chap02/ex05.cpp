#include <iostream>

void celsiusToFahrenheit(float);

int main(void) {

  float celsius;

  std::cout << "Enter a temperature in celsius to convert into fahrenheit: ";
  std::cin >> celsius;
  celsiusToFahrenheit(celsius);

  return 0;
}

void celsiusToFahrenheit(float celsius) {
  std::cout << celsius << " degrees Celsius are equal to " << 1.8 * celsius + 32.0 << " degrees Fahrenheit";
}