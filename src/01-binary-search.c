#include <stdio.h>

int binary_search(int* array, int size, int key);
int binary_search_(int* array, int lower_bound, int upper_bound, int key);

void test_binary_search();

int main() {
  test_binary_search();

  printf("\n\n\n");
  return 0;
}

void test_binary_search() {
  int ar[] = { 1, 2, 3, 4, 5, 6, 7 };
  int size = sizeof(ar) / sizeof(int);
  int key = 3;

  int pos = binary_search(ar, size, key);

  printf("Postition of %d is [%d]", key, pos);
}

int binary_search(int* ar, int size, int key) {
  return binary_search_(ar, 0, size - 1, key);
}

int binary_search_(int* ar, int lb, int ub, int key) {
  if (lb > ub) {
    return -1;
  }

  int mid = (lb + ub) / 2;

  if (ar[mid] == key) {
    return mid;
  }

  if (key < ar[mid]) {
    return binary_search_(ar, lb, mid - 1, key);
  } else {
    return binary_search_(ar, mid + 1, ub, key);
  }
}
