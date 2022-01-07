#include <iostream>
#include <vector>
#include <string>

bool in(std::vector<double> arr, double n) {
  for (int i=0; i<arr.size(); i++) {
    if (arr[i] == n) {
      return true;
    }
  }
  return false;
}

int main() {
  std::vector<double> numbers;
  std::string input;
  while (input != "00") {
    std::cout<<"Enter a number. Enter '00' to exit: ";
    std::cin>>input;
    double n = std::stod(input);
    numbers.push_back(n);
  }
  std::vector<double> clean;
  int count = 0;
  for (int i=0; i<numbers.size(); i++) {
    if (!in(clean, numbers[i])) {
      clean.push_back(numbers[i]);
    }
    else {
      count++;
    }
  }
  std::cout<<"There were "<<count<<" duplicate values in your dataset.";
  return 0;
}
