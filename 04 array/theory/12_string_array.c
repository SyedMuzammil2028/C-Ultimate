#include <stdio.h>
// String array
int main()
{
    char str[] = "Hello";

    // Accessing and printing each character in string
    for (int i = 0; i < 5; i++)
    {
        printf("Character at index %d: %c\n", i,str[i]);
    }
    
    return 0;
}