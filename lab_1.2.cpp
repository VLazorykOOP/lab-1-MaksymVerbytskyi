#include <iostream>
#include <time.h>

void placeholder(int *A, int n) {
  for (int i = 0; i <= n; i++) {
    A[i] = rand() % 21 - 10;
    std::cout << A[i] << " ";
  }
  std::cout << std::endl;
}

int filter(int *A, int T, int n) {
  int j = 0;
  int Tn, max;
  bool flagMax = false;
  for (int i = 0; i <= n; i++) {
    if (A[i] == T) {
      Tn = i;
      break;
    }
  }
  if (Tn) {
    for (int i = 0; i <= Tn; i++) {
      if (A[i] > 0) {
        continue;
      }
      if (flagMax == false) {
        flagMax = true;
        max = A[i];
      }
      if (A[i] > max) {
        max = A[i];
      }
    }
  }
  return max;
}

int main() {
  srand(time(NULL));

  int T = 0;
  int n = 20;
  int a;
  int *A = new int[n];
  placeholder(A, n);
  std::cin >> T;
  int max = filter(A, T, n);
  if (max) {
    std::cout << "Максимальне число: " << max << std::endl;
  } else
    std::cout << "Максимального числа нема" << std::endl;
  delete[] A;
  return 0;
}