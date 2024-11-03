#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int count=0;

    printf("Enter string:");
    fgets(str, 100, stdin);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] =='a' || str[i] =='e' || str[i] =='i' || str[i] =='o' || str[i] =='u')
        {
            count++;
        }
    }

    printf("\nVowel in sting is %d times.", count);

    return 0;
}