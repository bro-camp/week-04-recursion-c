// Program to print the following pattern
// 5 4 3 2 *
// 5 4 3 * 1
// 5 4 * 2 1
// 5 * 3 2 1
// * 4 3 2 1

#include <stdio.h>

void print_from_n_to_one(int n, int x);
void print_pattern_(int n, int i);
void print_pattern(int n);

int main() {
  int n = 5;

  print_pattern(n);

  printf("\n\n\n");
  return 0;
}

// 'x' is where asterisk should be printed
void print_from_n_to_one(int n, int x) {
  if (n == 0) {
    return;
  }

  if (n == x) {
    printf("%2s ", "*");
  } else {
    printf("%2d ", n);
  }

  if (n == 1) {
    return;
  } else {
    return print_from_n_to_one(--n, x);
  }
}

// Give i = 1
void print_pattern_(int n, int i) {
  if (n == 0) {
    return;
  }

  print_from_n_to_one(n, i);

  if (i == n) {
    return;
  } else {
    printf("\n");
    return print_pattern_(n, ++i);
  }
}

void print_pattern(int n) { print_pattern_(n, 1); }
