#include "algorithm_impl.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<float> sorted_vector = {4.0, 1.0, 0.0, -1.0, 5.0, 9.0, 2.0, 10.0};
  // int target = 10;
  std::vector<float> sorted_vec = mergesort(sorted_vector);
  for (float value : sorted_vec) {
    std::cout << value << "," << std::endl;
  }
  // std::cout << "Index of " << target << " is " << index << std::endl;
}