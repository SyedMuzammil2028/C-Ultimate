#include <stdio.h>
// While loop displaying array
int main()
{
    // Declaring an array of integers with 5 elements
    int array[5] = {10, 20, 30, 40, 50};

    // Accessing array elements
    int idx=0;
    while(idx<5)
    {
        printf("array[%d] = %d\n", idx, array[idx]);
        idx++;
    }

    return 0;
}