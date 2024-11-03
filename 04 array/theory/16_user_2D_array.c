#include <stdio.h>
// User 2D array syntex
int main()
{
    int rows , columns;
    printf("\nEnter rows: ");
    scanf("%d",&rows);
    printf("Enter column: ");
    scanf("%d",&columns);

    int array[rows][columns];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("Enter values of array[%d][%d]: ", i, j);
            scanf("%d", &array[i][j]);
        }
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }
    return 0;
}