#include "converter.hpp"
#include <iostream>

using namespace std;

double KILOGRAMS_PER_POUND = 0.4535924;


double inchesToCentimeters(double inches) {
  return inches * CENTIMETERS_PER_INCH;
}

double centimetersToInches(double centimeters) {
    return centimeters / CENTIMETERS_PER_INCH;
}

double poundsToKilograms(double pounds) {
    return pounds * KILOGRAMS_PER_POUND;
}

double kilogramsToPounds(double kilograms) {
    return kilograms / KILOGRAMS_PER_POUND;
}

double fahrenheitToCelsius(double fahrenheit) {
  // NOTE: c=5/9 * (f-32)
  return 5.0 * (fahrenheit - 32) / 9.0 ;
}

double celsiusToFahrenheit(double celsius) {
  // f=9/5 * c + 32
    return 9.0/5.0 * celsius + 32 ;
}

bool isValidMenuChoice(int choice) {
  return choice <= 6 && choice >=0;
}

bool requiresNonNegativeValue(int choice) {
    // Length and weight conversions cannot use negative values.
    // Temperature conversions may use negative values.
  return choice >=0 && choice <=4;
}

bool isValidValueForChoice(int choice, double value) {
    // TODO:
    // 1. Invalid menu choices should return false.
    // 2. Length and weight conversions should reject negative values.
    // 3. Temperature conversions should allow negative values.
  if (isValidMenuChoice(choice) == false) {
    return false;
  }
  if (requiresNonNegativeValue(choice) == true ) {
    return (value >= 0); 
  }
  else {return true;}
}

void printMenu() {
    cout << endl;
    cout << "Unit Converter" << endl;
    cout << endl;
    cout << "1. Inches to centimeters" << endl;
    cout << "2. Centimeters to inches" << endl;
    cout << "3. Pounds to kilograms" << endl;
    cout << "4. Kilograms to pounds" << endl;
    cout << "5. Fahrenheit to Celsius" << endl;
    cout << "6. Celsius to Fahrenheit" << endl;
    cout << "0. Exit" << endl;
    cout << endl;
    cout << "Enter choice: ";
}
