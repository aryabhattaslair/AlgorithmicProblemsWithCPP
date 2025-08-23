#include "binary_search.h"
#include <vector>

int binary_search(const std::vector<int> &sorted_vector, int target) {
  int left = 0;
  int right = sorted_vector.size() - 1;
  while (left <= right) {
    int mid = (left + right) / 2;
    if (sorted_vector[mid] == target) {
      return mid;
    }
    if (sorted_vector[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  return -1;
}
