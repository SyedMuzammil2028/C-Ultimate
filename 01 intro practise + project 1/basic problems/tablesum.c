#include <stdio.h>
// sum of table
int main()
{
    int num;
    int fact = 0;
    int sum = 0;
    printf("Enter number to find sum of it with starting natural numbers = ");
    scanf("%d", &num);
    for (int i = 1; i <= 10; i++)
    {
        fact = i * num;
        sum += fact;
    }
    printf("Sum of the table %d is %d",num, sum);
    return 0;
}