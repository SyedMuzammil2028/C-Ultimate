#include <stdio.h>
// Finding size of an array in bits
int main()
{
    int array[5] = {10, 20, 30, 40, 50};

    // Size in bits
    int size=sizeof(array);
    printf("Size of array: %d\n", size);

    return 0;
}