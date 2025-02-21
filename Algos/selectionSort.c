#include <stdio.h>

void selectionSort(int arr[], int n) {
  int temp;
  for (int i = 0; i < n - 1; i++) {

    int small = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] < arr[small]) {
        temp = arr[small];
        arr[small] = arr[j];
        arr[j] = temp;
      }
    }
  }
}
int main() {
  int n;
  printf("Enter no of terms\n");
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  selectionSort(arr, n);
  for (int i = 0; i < n; i++) {
    printf("%d\n", arr[i]);
  }
  return 0;
}
