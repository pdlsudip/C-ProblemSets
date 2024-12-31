#include <stdio.h>
void is_palindrome(int, int);
int main() {
  int a;
  printf("Enter the number to check if it is Palindrome or not: ");
  scanf("%d", &a);
  int rem, reverse = 0, n = a;
  while (n != 0) {
    rem = n % 10;
    reverse = reverse * 10 + rem;
    n /= 10;
  }

  is_palindrome(reverse, a);
}
void is_palindrome(int reverse, int a) {
  if (reverse == a) {
    printf("The number is Palindrome");
  } else {
    printf("The number is not a Palindrome ");
  }
}
