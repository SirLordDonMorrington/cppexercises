#include <iostream>

using namespace std;

int main(void) {
  float degrees = 0, minutes = 0, seconds = 0;

  const float secondsOfArcInMinute = 60;
  const float minutesOfArcInDegree = 60;

  cout << "Enter a latitude in degrees, minutes, and seconds\n";
  cout << "First, enter the degrees: ";
  cin  >> degrees;
  cout << "Next, enter the minutes of arc: ";
  cin >> minutes;
  cout << "Finally, enter the seconds of arc: ";
  cin >> seconds;

  cout << degrees << " degrees ";

  minutes = minutes + (seconds / secondsOfArcInMinute); 
  degrees = degrees + (minutes / minutesOfArcInDegree); 

  cout << minutes << " minutes " << seconds << " seconds are equivalent to " << degrees << " degrees";
  return 0;
}