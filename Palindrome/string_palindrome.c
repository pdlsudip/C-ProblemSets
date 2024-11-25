#include <stddef.h>
#include <stdio.h>
#include <string.h>
void check_palindrome(char *, char *);
char *reverse(char *);
int main() {
  char string[100];
  printf("Enter the string: ");
  scanf("%s", string);
  char reverse_string[100];
  strcpy(reverse_string, string);
  char *reversed = reverse(reverse_string);
  check_palindrome(string, reversed);
}
void check_palindrome(char *string, char *reversed_string) {
  if (strcmp(string, reversed_string) == 0) {
    printf("The provided string is a palindrome\n");
  } else {
    printf("The provided string is not a palindrome\n");
  }
}
char *reverse(char *string) {
  if (string == NULL)
    return NULL;
  int first = 0;
  int last = strlen(string) - 1;
  char temp;
  while (first < last) {
    temp = string[first];
    string[first] = string[last];
    string[last] = temp;

    first++;
    last--;
  }
  return string;
}
