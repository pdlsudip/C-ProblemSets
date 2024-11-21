#include <stdio.h>
#include <string.h>
int main(int argc, char *argv[]) {
  if (argc < 2) {
    printf("Usage: %s <filename>", argv[0]);
  }
  FILE *file;
  file = fopen(argv[1], "r");
  if (file == NULL) {
    perror("Error reading file\n");
  }
  char ch;
  while ((ch = fgetc(file)) != EOF) {
    printf("%c", ch);
  }
  return 0;
}
