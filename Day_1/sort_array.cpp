#include <iostream>
#include <vector>
#include <algorithm>

int main() {
  std::vector<double> numbers;
  double input;
  while (numbers.size() < 10) {
    std::cout<<"Please enter a number: ";
    std::cin>>input;
    numbers.push_back(input);
  }
  std::sort(numbers.begin(), numbers.end());
  for (int i=0; i<numbers.size(); i++) {
    std::cout<<numbers[i]<<std::endl;
  }
  return 0;
}
