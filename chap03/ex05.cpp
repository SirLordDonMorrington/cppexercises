#include <iostream>

using namespace std;

int main(void) {
  long long worldPopulation, anotherCountryPopulation;
  
  cout << "Enter the world's population: ";
  cin >> worldPopulation;
  cout << "Enter the population of a country: ";
  cin >> anotherCountryPopulation;

  cout << "The population of the country is " << 100.0 * anotherCountryPopulation/worldPopulation << "% of the world population";
  return 0;
}