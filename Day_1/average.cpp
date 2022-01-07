#include <iostream>
#include <vector>
#include <string>

int main() {
  std::string input;
  std::vector<double> data;
  while (input != "00") {
    std::cout<<"Please enter a number. Enter '00' to exit: ";
    std::cin>>input;
    double value = std::stod(input);
    data.push_back(value);
  }
  double sum;
  for (int i=0; i<data.size(); i++) {
    sum += data[i];
  }
  std::cout<<"The average of your data set is "<<sum/data.size();
  return 0;
}
