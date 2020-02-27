#include <iostream>

int main(void) {
  float furlongs;
  std::cout << "Enter a distance in furlongs to convert into yards: ";
  std::cin >> furlongs;
  std::cout << furlongs << " furlongs are equal to " << furlongs * 220.0 << " yards"; 
  return 0;
}