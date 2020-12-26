#include <iostream>
#include <cmath>

// Define tenth_power() here:
int tenth_power(int num) {

  int tenth_power = 1;

  for(int i = 0; i < 10; i++) {
    tenth_power = tenth_power*num;
  }

  //return pow(num, 10);
  return tenth_power;

}

int main() {

  std::cout << tenth_power(0) << "\n";
  std::cout << tenth_power(1) << "\n";
  std::cout << tenth_power(2) << "\n";

}
