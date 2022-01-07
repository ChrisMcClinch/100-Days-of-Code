#include <iostream>
#include <string>

int main() {
  std::string input;
  std::cout<<"Please enter a string to be trimmed: ";
  getline(std::cin,input);
  std::string output = input.substr(0,10);
  std::cout<<output;
  return 0;
}
