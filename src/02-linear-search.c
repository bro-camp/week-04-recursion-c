#include <stdio.h>

int linear_search(int* array, int size, int key);
int linear_search_(int* array, int lower_bound, int upper_bound, int key);

void test_linear_search();

int main() {
  test_linear_search();

  printf("\n\n\n");
  return 0;
}

void test_linear_search() {
  int ar[] = { 1, 2, 3, 4, 5, 6, 7 };
  int size = sizeof(ar) / sizeof(int);
  int key = 3;

  int pos = linear_search(ar, size, key);

  printf("Postition of %d is [%d]", key, pos);
}

int linear_search_(int* array, int lower_bound, int upper_bound, int key) {
  if (lower_bound > upper_bound) {
    return -1;
  }

  if (array[lower_bound] == key) {
    return lower_bound;
  }

  return linear_search_(array, ++lower_bound, upper_bound, key);
}

int linear_search(int* array, int size, int key) {
  return linear_search_(array, 0, size - 1, key);
}
