#include <stdio.h>
int main() {
  int a[] = {1, 3, 4, 5, 6};
  int size = sizeof(a) / sizeof(a[0]);
  int temp = 0;
  for (int i = 0; i < (size - 1); i++) {
    temp = a[i];
    a[i] = a[size - i - 1];
    a[size - i - 1] = a[i];
  }
  for (int i = 0; i < size; i++) {
    printf("%d\n", a[i]);
  }
  return 0;
}
