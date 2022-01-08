#include <iostream>

int main() {
  int choice;
  std::cout<<"Welcome to Chris's drink machine."<<std::endl;
  std::cout<<"Press 1 for Coke"<<std::endl;
  std::cout<<"Press 2 for Diet Coke"<<std::endl;
  std::cout<<"Press 3 for Sprite"<<std::endl;
  std::cout<<"Press 4 for Mr. Pibb"<<std::endl;
  std::cout<<"Press 5 for Coke Zero"<<std::endl;
  std::cin>>choice;
  if (choice < 1 || choice > 5) {
    std::cout<<"Error. Choice was not valid; here is your money back.";
  }
  if (choice == 1) {
    std::cout<<"Here's your Coke";
  }
  if (choice == 2) {
    std::cout<<"Here's your Diet Coke";
  }
  if (choice == 3) {
    std::cout<<"Here's your Sprite";
  }
  if (choice == 4) {
    std::cout<<"Here's your Mr. Pibb";
  }
  if (choice == 5) {
    std::cout<<"Here's your Coke Zero";
  }
  return 0;
}
