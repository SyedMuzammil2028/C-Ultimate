#include <stdio.h>
// program to print table 
int main()
{
    int arr[10], num;

    printf("\nEnter number to find its table: ");
    scanf("%d", &num);

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", num, i + 1, num * (i + 1));
    }
    return 0;
}