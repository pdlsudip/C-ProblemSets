#include <stdio.h>
int main()
{
  int array[] = {3, 4, 6, 9, 5, 10};
  int maximum = array[0];
  int i;
  int size = sizeof(array) / sizeof(array[0]);
  for (i = 1; i < size; i++)
  {
    if (array[i] > maximum)
    {
      maximum = array[i];
    }
  }
  printf("The Maximim number in the array is : %d", maximum);
  return 0;
}
