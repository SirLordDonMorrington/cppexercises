#include <iostream>


int main(void) {
  const int inchesInFeet = 12;
  int inches;

  std::cout << "Enter your height in inches: __\b\b";
  std::cin >> inches;
  std::cout << "You are " << inches / inchesInFeet << " ft " <<  inches % inchesInFeet << " in tall";

  return 0;
}