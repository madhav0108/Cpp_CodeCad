#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {

  std::vector<int> first_three_multiples = {0, 0, 0};

  for(int i = 0; i < first_three_multiples.size(); i++) {
    first_three_multiples[i] = num*(i+1);
  }

  return first_three_multiples;

}

int main() {

  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }

}
