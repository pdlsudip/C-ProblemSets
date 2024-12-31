// As scanf and gets function are good but they are not safe to use . Probably
// this function is more safe to use
// advantage over scanf --- scanf stops reading after the whitespace is
// encountered but this read_string function read whitespace and after
// whitespace too
#include <stdio.h>
char *read_string(char string[], int num) { // custom gets function
  int ch, i = 0;
  while ((ch = getchar()) != '\n') {
    if (i < num) {
      string[i++] = ch;
    }
    string[i] = '\0';
  }
  return string;
}
int main() {
  char string[100];
  printf("%s", read_string(string, 100));
}
