#include <iostream>

int main() {
  int grade;
  std::cout<<"What was your score? ";
  std::cin>>grade;
  if (grade < 0 || grade > 100) {
    std::cout<<"Scores must be between 0 and 100";
  }
  else {
  if (grade == 100) {
    std::cout<<"You got a perfect score!"<<std::endl;
  }
  if (grade < 60) {
    std::cout<<"You got an F";
  }
  else if (grade < 70) {
    std::cout<<"You got a D";
  }
  else if (grade < 80) {
    std::cout<<"You got a C";
  }
  else if (grade < 90) {
    std::cout<<"You got a B";
  }
  else {
    std::cout<<"You got an A";
  }
  }
  return 0;
}
