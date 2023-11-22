#include <iostream>
#include <time.h>

void placeholder(int *A, int n) {
  for (int i = 0; i <= n; i++) {
    A[i] = rand() % 21 - 10;
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

void filter(int *A, int n) {
  int j = 0;
  int *B = new int[0];
  for (int i = 0; i <= n; i++) {
    if (A[i] < 0) {
      j++;
      B[j] = A[i];
      std::cout << B[j] << " ";
    }
  }
  delete[] B;
}

int main() {
  srand(time(NULL));
  int n = 10;
  int *A = new int[n];
  placeholder(A, n);
  filter(A, n);
  delete[] A;
  return 0;
}