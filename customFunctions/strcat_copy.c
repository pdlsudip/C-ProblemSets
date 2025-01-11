// strcat append the string to a pre existing string
// char *strcaat(char *s1,

#include <stdio.h>
////              const char *s2) { // slightly spelling change as it give error
////  char *p = s1;
////  while (*p != '\0') {
////    p++;
////  }
////  while (*s2 != '\0') {
////    *p = *s2;
////    p++;
////    s2++;
////  }
////  *p = '\0';
////  return s1;
//}
// advanced version
char *strcaat(char *s1, const char *s2) {
  char *p = s1;
  while (*p)
    p++;
  while ((*p++ = *s2++))
    ;
  return s1;
}
int main(void) {
  char string1[] = "Hello";
  char add[] = "world";
  strcaat(string1, add);
  printf("%s", string1);
  return 0;
}
