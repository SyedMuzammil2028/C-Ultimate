#include <stdio.h>
// program to find transpose matrix of size (m x n)
int main()
{
    int rows, columns;
    printf("\nEnter matrix (m x n)");
    printf("\nRows: ");
    scanf("%d", &rows);
    printf("Columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];
    int transposeMatrix[columns][rows];
    int i, j;

    printf("Enter elements of matrix %d x %d:\n", rows, columns);
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("element[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal matrix\n");
    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < columns; j++)
        {
            transposeMatrix[j][i] = matrix[i][j];
        }
    }

    printf("\nTranspose matrix\n");
    for (j = 0; j < columns; j++)
    {
        for (i = 0; i < rows; i++)
        {
            printf("%d ", transposeMatrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}