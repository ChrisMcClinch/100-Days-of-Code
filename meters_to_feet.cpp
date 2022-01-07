#include <iostream>

int main() {
  double meters;
  std::cout<<"Please enter a number of meters to convert to feet: ";
  std::cin>>meters;
  double feet = meters * 3.28084;
  double i = feet - (int) feet;
  double inches = (i * 12);
  std::cout<<meters<<" meters is "<<(int) feet<<" feet, "<<inches<<" inches.";
  return 0;
}
