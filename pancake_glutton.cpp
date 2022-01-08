#include <iostream>
#include <vector>

int main() {
  std::vector<int> pancakes;
  int n=1;
  int eaten;
  while (pancakes.size() < 10) {
    std::cout<<"How many pancakes did person "<<n<<" eat? ";
    std::cin>>eaten;
    pancakes.push_back(eaten);
    n++;
  }
  int max = pancakes[0];
  for (int i=0; i<pancakes.size(); i++) {
    if (pancakes[i] > max) {
      max = pancakes[i];
    }
  }
  int glutton;
  for (int i=0; i<pancakes.size(); i++) {
    if (pancakes[i] == max) {
      glutton = i;
    }
  }
  int min = pancakes[0];
  for (int i=0; i<pancakes.size(); i++) {
    if (pancakes[i] < min) {
      min = pancakes[i];
    }
  }
  int abstainer;
  for (int i=0; i<pancakes.size(); i++) {
    if (pancakes[i] == min) {
      abstainer = i;
    }
  }
  std::cout<<"Person "<<glutton + 1<<" was the biggest glutton, eating "<<max<<" pancakes."<<std::endl;
  std::cout<<"Person "<<abstainer + 1<<" was the biggest abstainer, eating "<<min<<" pancakes.";
  return 0;
}
