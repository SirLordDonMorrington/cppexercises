#include <iostream>

using namespace std;

int main(void) {
  long long seconds;
  const int secondsInMinute = 60;
  const int minutesInHour = 60;
  const int hoursInDay = 24;

  int minutes, hours, days;
  
  cout << "Enter the number of seconds: ";
  cin >> seconds;
  
  cout << seconds << " seconds are equal to ";
  
  minutes = seconds / secondsInMinute;
  seconds = seconds % secondsInMinute;

  hours = minutes / minutesInHour;
  minutes = minutes % minutesInHour;

  days = hours / hoursInDay;
  hours = hours % hoursInDay;

  cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds";

  return 0;
}