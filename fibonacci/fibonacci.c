#include <stdio.h>
int main() {
  int first = 0;
  int second = 1;
  int fibo = 0;
  int n;
  printf("Enter the number of terms : ");
  scanf("%d", &n);
  printf("The fibonacci series are: %d %d", first, second);
  for (int i = 0; i <= n; i++) {
    fibo = first + second;
    first = second;
    second = fibo;
    printf(" %d", second);
  }
}
