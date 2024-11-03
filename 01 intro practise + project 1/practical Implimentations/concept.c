#include <stdio.h>

int main()
{
    int num;
    printf(" Enter number = ");
    scanf("%d", &num);
    printf("%d %d %d ", num, ++num, num++);
    return 0;
}