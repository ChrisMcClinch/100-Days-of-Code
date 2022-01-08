#include <iostream>

int main() {
  int choice;
  int count = 0;
  while (true) {
    std::cout<<"Please enter any number other than "<<count<<": ";
    std::cin>>choice;
    if (choice == count) {
      break;
    }
    count ++;
  }
  std::cout<<"Hey! You weren't supposed to enter "<<count<<"!";
  return 0;
}
