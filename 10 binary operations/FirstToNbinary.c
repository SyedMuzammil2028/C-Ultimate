#include <stdio.h>
int main()
{
    int numtill;
    printf("\nNumber To Binary Conversion");
    printf("\n  ( 1 to entered number )  ");
    printf("\n----------------------------");
    printf("\nEnter number: ");
    scanf("%d", &numtill);
    for (int i = 1; i <= numtill; i++)
    {
        int num = i;
        int ans = 0;
        int pow = 1;
        while (num > 0)
        {
            int reminder = num % 2;
            num = num / 2;
            ans += reminder * pow;
            pow = pow * 10;
        }
        printf("\n%d --> %d", i, ans);
    }
    return 0;
}