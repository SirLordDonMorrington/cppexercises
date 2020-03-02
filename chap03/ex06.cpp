#include<iostream>

using namespace std;

int main(void) {
  float drivenMiles, gallonsUsed;

  cout << "How many miles have you driven? ";
  cin >> drivenMiles;
  cout << "How many gallons of gas did you used? ";
  cin >> gallonsUsed;

  cout << "miles per gallon " << drivenMiles/gallonsUsed;
  
  return 0;
}