#include <stdio.h>

int data[] = { 42, 19, 1, 5, 7, 8, 3 };

void isort(int* a, int n) {
  for(int i = 1; i < n; i++) {
    for(int j = i; j > 0 && a[j] < a[j-1]; j--) {
      int t = a[j];
      a[j] = a[j-1];
      a[j-1] = t;
    }
  }
}

void main() {
  isort(data, 7);

  for(int i = 0; i < 7; i++) {
    printf("%d %d\n", i, data[i]);
  }
}
