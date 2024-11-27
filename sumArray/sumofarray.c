#include <stdio.h>
int main() {
  int sum = 0;
  int a[] = {1, 1, 1};
  int length = sizeof(a) / sizeof(a[0]);
  for (int i = 0; i < length; i++) {
    sum = sum + a[i];
  }
  printf("The sum of the elements of array is: %d", sum);
  return 0;
}
