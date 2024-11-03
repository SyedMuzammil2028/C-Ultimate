#include <stdio.h>
// program to find sum of rows and column of matrix of size (m x n)
int main()
{
    
    int rows, columns;
    int rowSum = 0;
    int columnSum = 0;
    
    printf("\nMatrix (m x n)");
    printf("\nRows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &columns);
   
    int arr[rows][columns];
    printf("Enter elements in matrix:\n");

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            rowSum += arr[i][j];
        }
        printf("\nSum of %d row is %d", i + 1, rowSum);
        rowSum = 0;
    }
    
    printf("\n");
    for (int j = 0; j < columns; j++)
    {
        for (int i = 0; i < rows; i++)
        {
            columnSum += arr[i][j];
        }
        printf("\nSum of %d column is %d", j + 1, columnSum);
        columnSum = 0;
    }

    return 0;
}