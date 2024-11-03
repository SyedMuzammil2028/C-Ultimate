#include <stdio.h>

int main()
{
    int income;
    float tax;
    printf(" Enter Income = ");
    scanf("%d", &income);

    if (income > 1000000)
        tax = (income - 1000000) * 0.3 + (500000) * 0.2 + (250000) * 0.05;
    else if (income <= 1000000 && income > 500000)
        tax = (income - 5000000) * 0.2 + (250000) * 0.05;
    else if (income <= 500000 && income>250000)
        tax = (income - 250000) * 0.05;
    else
    {
        tax = 0;
    }
    printf("\nIncome tax is %.2f", tax);

    return 0;
}