#include <iostream>

using namespace std;

int main(void) {

  float liters;

  cout << "how many liters per 100km does your car spend? ";
  cin >> liters;
  cout << "In U.S. style that's about " << 240.7925f / liters << " miles per gallon";

  return 0;
}