#include <stdio.h>
// program to print tables of multiple numbers using 2D array
int main()
{
    int num1, num2, num3;
    printf("\nEnter 3 numbers to find there tables: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    int arr[3][10];
    int number[] = {num1, num2, num3};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            arr[i][j] = number[i] * (j + 1);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("\nTable of %d:\n", number[i]);
        for (int j = 0; j < 10; j++)
        {
            printf("\narray[%d][%d] --> %d x %d = %d",i,j,number[i],j+1, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}