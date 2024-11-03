#include <stdio.h>
// program to print fabonachi series
int main()
{
    int num, i;
    printf("Enter number (number>2): ");
    scanf("%d", &num);
    int arr[num];
    arr[0] = 0;
    arr[1] = 1;
    for (i = 2; i <= num; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];
        printf("%d ", arr[i]);
    }

    return 0;
}