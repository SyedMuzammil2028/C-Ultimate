#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    char ch;
    
    printf("\nEnter string: ");
    fgets(str, 100, stdin);
    printf("\nEnter character to check its occurance: ");
    scanf(" %c",&ch);
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            count++;
        }
    }

    printf("Character '%c' found in the string %d times.\n", ch, count);

    return 0;
}
