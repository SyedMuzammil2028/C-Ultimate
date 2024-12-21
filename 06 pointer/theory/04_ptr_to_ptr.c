#include <stdio.h>
int main()
{
    int x=5;
    int *ptr=&x;
    int **pptr=&ptr;
    
    // printing the value of x through double pointer
    printf("Value of x: %d\n\n", **pptr);
    
    // break down
    printf("Value of x through ptr: %d\n", *ptr);
    printf("Value of x through **pptr: %d\n\n", **pptr);

    // address of pointers
    printf("Adress of x: %u\n", &x);
    printf("Address of ptr: %u\n", &ptr);
    printf("Adress of pptr: %u\n", &pptr);

    return 0;
}