#include <stdio.h>
// For loop displaying array
int main()
{
    // Declaring an array of integers with 5 elements
    int array[5] = {10, 20, 30, 40, 50};

     // Accessing array elements
    for (int i = 0; i < 5; i++)
    {
        printf("array[%d] = %d\n", i, array[i]);
    }

    return 0;
}