#include <stdio.h>
int main() {
  int a[4] = {1, 35, 6, 2};
  int largest = a[0];
  for (int i = 1; i < 4; i++) {
    if (a[i] > largest) {
      largest = a[i];
    }
  }
    printf("The larget is:%d", largest);
  return 0;
}
