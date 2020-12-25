#include <iostream>
#include <vector>

int main() {

  int sumEven = 0;
  int prdtOdd = 0;
  int i;

  std::vector<int> vector_review = {2, 4, 3, 6, 1, 9};

  for(i = 0; i < vector_review.size(); i++) {
    if(vector_review[i] % 2 == 0) {
      sumEven = sumEven + vector_review[i];
    } else {
      prdtOdd = prdtOdd * vector_review[i];
    }
  }

  std::cout << "Sum of even numbers is " << sumEven << "\n";
  std::cout << "Product of odd numbers is " << prdtOdd << "\n";

}
