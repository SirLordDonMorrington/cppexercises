#include <iostream>

int main(void) {

  float inches, feet, pounds;
  const float inchesInFeet = 12;
  const float meterInInches = 0.0254;
  const float poundsInKg = 2.2;

  std::cout << "Enter your height (ft in) __ __\b\b\b\b\b";
  std::cin >> feet;
  std::cin >> inches;

  std::cout << "Enter your weight in punds ___\b\b\b";
  std::cin >> pounds;

  //the height is transformed from ft in to meters
  float squaredHeight = (((feet * inchesInFeet) + inches) * meterInInches) * (((feet * inchesInFeet) + inches) * meterInInches);

  std::cout << "Your BMI (Body Mass Index) is " << (pounds / poundsInKg) / squaredHeight;  // pounds are converted into kilograms

  return 0;
}