#include <stdio.h>
// Finding size of an array or elements in an array
int main()
{
    int array[] = {10, 20, 30, 40, 50};

    // elments in an array formula
    int size=sizeof(array)/sizeof(array[0]);
    
    printf("Size of array: %d\n", size);

    return 0;
}