// Sorting the given numbers in a array ascending and descending
// selection sort
// #include <stdio.h>
// void swap(int *a, int *b) {
//  int temp;
//  temp = *a;
//  *a = *b;
//  *b = temp;
//}
// int main() {
//  int a[5] = {2, 4, 3, 5, 1};
//  int len = 5;
//  printf("Before Swap\n\n\n");
//   for (int k = 0; k < len; k++) {
//    printf("%d\n", a[k]);
//  }
//  for(int j=len-1; j>=0; j--){
// int max = 0;
//  for (int i = 0; i <=j; i++) {
//    if (a[i] > a[max]) {
//      max = i;
//    }
//  }
//  swap(&a[max], &a[j]);
//  }
//  printf("After Swap\n\n\n");
//  for (int k = 0; k < len; k++) {
//    printf("%d\n", a[k]);
//  }
//  return 0;
//}

#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("Enter the length of an array: \n");
  scanf("%d", &n);
  int *ptrarray = (int *)malloc(n * sizeof(int));
  for (int i = 0; i < n; i++) {
    scanf("%d", &ptrarray[i]);
  }
  for (int i = 0; i < n; i++) {
    printf("%u\n", (ptrarray + i));
  }

  return 0;
}
