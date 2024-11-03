#include <stdio.h>
int main()
{
    int num, sum = 0, i;
    printf("Enter number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum += i;
    }
    printf("The sum to N is %d", sum);
    return 0;
}