#include <stdio.h>
int main()
{
    int num, i=2;
    printf("Enter number to check whether a number is prime: ");
    scanf("%d", &num);
    while (i <num)
    {
        if (num % i == 0)
        {
            printf("%d is not a prime number", num);
            return 1;
        }
        i++;
    }
    printf("%d is a prime number", num);
    return 0;
}