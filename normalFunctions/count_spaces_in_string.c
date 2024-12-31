#include <stdio.h>
int count_spaces(const char *s) {
  int count = 0;
  for (; *s != '\0'; s++) {
    if (*s == ' ')
      count++;
  }
  return count;
}
int main() {
  char string[] = "Hello World! This is C Programming";
  int whitespace = count_spaces(string);
  printf("The no of whitespaces is : %d\n", whitespace);
  return 0;
}
