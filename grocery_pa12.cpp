#include <iostream>
#include <vector>

int main() {

  std::vector<std::string> grocery = {"Hot Pepper Jam", "Dragon Fruit", "Brussel Sprouts"};

  // Add more
  grocery.push_back("Salsa Verde");
  grocery.push_back("Moroccain Chickpeas");
  grocery.push_back("Daikon Crisps");

  std::cout << grocery.size() << "\n";

  
}
