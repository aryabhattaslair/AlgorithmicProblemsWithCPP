#include "algorithm_impl.h"
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

std::vector<float> merge(const std::vector<float> &left,
                         const std::vector<float> &right) {
  std::vector<float> result;
  int i = 0, j = 0;
  while (i < left.size() && j < right.size()) {
    if (left[i] < right[j]) {
      result.push_back(left[i]);
      i++;
    } else {
      result.push_back(right[j]);
      j++;
    }
  }
  if (i < left.size()) {
    result.insert(result.end(), left.begin() + i, left.end());
  } else {
    result.insert(result.end(), right.begin() + j, right.end());
  }
  return result;
}

std::vector<float> mergesort(const std::vector<float> &arr) {
  if (arr.size() <= 1) {
    return arr;
  }

  int mid = arr.size() / 2;
  std::vector<float> left(arr.begin(), arr.begin() + mid);
  std::vector<float> right(arr.begin() + mid, arr.end());

  left = mergesort(left);
  right = mergesort(right);

  return merge(left, right);
}
