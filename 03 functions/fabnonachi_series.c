#include <stdio.h>
// Fabonachi series
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
int series(int num);
int main()
{
    int num;
    printf(" Enter number in series = ");
    scanf("%d", &num);
    printf("The number in seris is = %d", series(num));
    return 0;
}
int series(int num)
{
    if (num == 1 || num == 2)
    {
        return num - 1;
    }
    return series(num - 2) + series(num - 1);
}