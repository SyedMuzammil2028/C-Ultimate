#include <stdio.h>

int main()
{
    int num;
    int prime = 1;
    printf("Enter a number to check weather is is prime number = ");
    scanf("%d", &num);
    if (num <= 1) //( num==1 || num ==0)
    {
        prime = 0;
    }
    else
    {
        for (int i = 2; i < num; i++)
        {
            if (num % i == 0 && num != 2)
            {
                prime = 0;
                break;
            }
        }
    }
    if (prime)
        printf("%d is a prime number", num);
    else
        printf("%d is not a prime number", num);
    return 0;
}