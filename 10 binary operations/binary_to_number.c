#include <stdio.h>
int main()
{
    int binary_num, pow = 1, ans = 0, reminder;
    printf("\nBinary To Number Conversion");
    printf("\n----------------------------");
    printf("\nEnter binary number: ");
    scanf("%d", &binary_num);
    while (binary_num > 0)
    {
        reminder = binary_num % 10;
        ans += reminder * pow;
        pow = pow * 2;
        binary_num /= 10;
    }
    printf("Real Number: %d", ans);
    return 0;
}