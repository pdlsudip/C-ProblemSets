#include <stdio.h>
int main()
{
    int array[] = {6, 7, 1, 2, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);
    int min = array[0];
    int i;
    for (i = 1; i < size; i++)
    {
        if (array[i] < min)
        {
            min = array[i];
        }
    }
    printf("The Minimum in Array is %d\n", min);
}