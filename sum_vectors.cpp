#include <iostream>
#include <vector>

int main() {
  std::vector<int> v1 = {2, 4, 6, 8, 10};
  std::vector<int> v2 = {3, 6, 9, 12, 15};
  std::vector<int> output;
  for (int i=0; i<v1.size(); i++) {
    output.push_back(v1[i] + v2[i]);
  }
  for (int i=0; i<output.size(); i++) {
    std::cout<<output[i]<<std::endl;
  }
  return 0;
}
