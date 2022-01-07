#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cout<<"Please enter a sentence to convert to uppercase: ";
  getline(std::cin, input);
  std::string output;
  for (int i=0; i<input.length(); i++) {
    output += std::toupper(input[i]);
  }
  std::cout<<output;
  return 0;
}
