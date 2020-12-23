#include <iostream>

int main() {

  int year, nYear;

  std::cout << "Enter a year: ";
  std::cin >> year;

  if (year < 999) {
    std::cout << "Invalid year. Enter a year: ";
    std::cin >> year;
  } else if (year > 10000) {
    std::cout << "Invalid year. Enter a year: ";
    std::cin >> year;
  } else {
    if (year % 4 == 0) {
    nYear = 0;
  } else if (year % 100 == 0 && year % 400 != 0) {
    nYear = 1;
  } else if (year % 400) {
    nYear = 0;
  } else {
    std::cout << "hehe, never made it to the console";
  }

  if (nYear == 0) {
    std::cout << year << " is a leap\n";
  } else {
    std::cout << year << " is not a leap year\n";
  }
  }

  if (year % 4 == 0) {
    nYear = 0;
  } else if (year % 100 == 0 && year % 400 != 0) {
    nYear = 1;
  } else if (year % 400) {
    nYear = 0;
  } else {
    std::cout << "hehe, never made it to the console";
  }

  if (nYear == 0) {
    std::cout << year << " is a leap\n";
  } else {
    std::cout << year << " is not a leap year\n";
  }

}
