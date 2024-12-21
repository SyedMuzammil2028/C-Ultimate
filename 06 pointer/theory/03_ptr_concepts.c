#include <stdio.h>
int main()
{
    int *ptr, x;
    ptr = &x;

    *ptr = 0;
    printf("x = %d\n", x); 
    printf("*ptr = %d\n", *ptr);
    
    *ptr += 5;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    (*ptr)++;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);

    x = 10;
    printf("x = %d\n", x);
    printf("*ptr = %d\n", *ptr);
    
    // here *ptr is same as x
    return 0;
}