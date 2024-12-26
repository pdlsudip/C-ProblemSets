// pMax_Min.c
#include <stdio.h>
#define N 10
void Max_Min(int[], int, int *, int *);
int main() {
  int a[N], i, max, min;
  printf("Enter the Numbers");
  for (i = 0; i < N; i++) {
    scanf("%d", &a[i]);
  }
  Max_Min(a, N, &max, &min);
  printf("The maximum number is :%d\n", max);
  printf("The minimum number is :%d\n", min);
  return 0;
}
void Max_Min(int a[], int n, int *max, int *min) {
  int i;
  *max = *min = a[0];
  for (i = 0; i < N; i++) {
    if (a[i] > *max) {
      *max = a[i];
    } else if (a[i] < *min) {
      *min = a[i];
    }
  }
}
