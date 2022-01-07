#include <iostream>
#include <string>

int main() {
  double temp;
  std::string unit;
  double newtemp;
  std::string newunit = "";
  std::cout<<"What is the temperature in degrees? ";
  std::cin>>temp;
  std::cout<<"Celsius or Fahrenheit? ";
  std::cin>>unit;
  if (unit[0] == 'f' || unit[0] == 'F') {
    unit = "Fahrenheit";
    newtemp = (temp-32) / 1.8;
    newunit = "Celsius";
  }
  else if (unit[0] == 'C' || unit[0] == 'c') {
    unit = "Celsius";
    newtemp = (temp*1.8) + 32;
    newunit = "Fahrenheit";
  }
  else {
    std::cout<<"I'm sorry; I can't convert that.";
  }
  if (newunit != "") {
  std::cout<<temp<<" degrees "<<unit<<" is equal to "<<newtemp<<" degrees "<<newunit<<".";
}
  return 0;
}
