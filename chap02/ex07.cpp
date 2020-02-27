#include <iostream>

void displayTime(int,int);

int main(void) {
  int hour, minute;

  std::cout << "Enter an hour and a minute value ";
  std::cin >> hour;
  std::cin>> minute;
  displayTime(hour, minute);

  return 0;
}

void displayTime(int hour, int minute) {
  std::cout << "Time " << hour << ":" << minute;
}