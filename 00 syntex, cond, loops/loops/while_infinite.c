#include <stdio.h>

int main()
{
    int x = 5;
    do
    {
        printf("The number is %d", x);
        x++;
    } while (x != 1);

    return 0;
}