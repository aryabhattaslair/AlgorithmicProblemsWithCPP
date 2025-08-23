#include "binary_search.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  std::vector<int> sorted_vector = {1, 2, 3, 5, 5, 5, 7, 8, 10, 10};
  int target = 10;
  int index = binary_search(sorted_vector, target);
  std::cout << "Index of " << target << " is " << index << std::endl;
}