#include <stdio.h>
int main()
{
    int x = 5;
    int *ptr = &x;

    printf("Address of x: %u\n", &x);
    printf("Value of ptr (address of x stored): %d\n", ptr);
    printf("Address of ptr: %u\n\n", &ptr);

    printf("Value of x: %d\n", x); // prints the value of x
    printf("Value of x: %d\n", *ptr); // prints the value of x using the ptr
    printf("Value of x: %d\n", *(&x)); // prints the value of x using the address of x without using a variable ptr

    // here & is used to get the address of x which is then assigned to 
    // ptr and then * is used to get the value at that address
    return 0;
}