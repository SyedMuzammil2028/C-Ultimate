#include <stdio.h>
// Char array
int main()
{
    char arr[5] = {'H', 'e', 'l', 'l', 'o'};

    // printing elements
    for (int i = 0; i < 5; i++)
    {
        printf("Character at index %d: %c\n", i, arr[i]);
    }
    
    // printing hello in string
    for (int i = 0; i < 5; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}