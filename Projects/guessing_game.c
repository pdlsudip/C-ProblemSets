#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  int random, guess;
  srand(time(NULL));
  random = rand()  %10 +1;
  printf("Welcome to the Number guessing game!\n");
  do {
    printf("Enter the Guess : ");
    scanf("%d", &guess);
    if (guess > random) {
      printf("Guess Lower!\n");
    } else if (guess < random) {

      printf("Guess Higher!\n");
    } else if (guess == random) {

      printf("You won\n");
      break;
    }
  } while (random != guess);
  printf("Game is finished\n");

  printf("Developed by pdlSudip\n");
  return 0;
}
