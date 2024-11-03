#include <stdio.h>
#include <string.h>
// search for character
// syntex --> strchr(str to find in , char to serch for)
int main()
{
    char str[] = "Hello, World!";
    char ch = 'W';
    if (strchr(str, ch))
    {
        printf("Character %c found in the string.\n", ch);
    }
    else
    {
        printf("Character %c not found.\n", ch);
    } // Output: "Character W found in the string."

    return 0;
}