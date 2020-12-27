#include <iostream>
#include <vector>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {

  int k, m = 0, n;
  if(text.size()%2 == 0) {
    k = text.size()/2;
  } else {
    k = (text.size()/2);
  }

  for(int j = (text.size())-1; j >= k; j--) {
    //std::cout << "endChar :" << text[j] << "\n";

    for(int i = n; i <= k; i++) {
      //std::cout << "startChar :" << text[i] << "\n";

      if(m == 0) {
        if(text[i] == text[j]) {

        m = 0;
        n++;
        break;

      } else {

        m = 1;
        break;

      }
      } else {
        break;
      }

    }

  }

  //std::cout << "m :" << m << "\n";
  if(m == 0) {
    return true;
  } else {
    return false;
  }

}

int main() {

  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";

}
