#include <stdio.h>
// program to print sum of rows in matrix
int main()
{
    printf("Enter elemnts in 2D array:\n");

    int arr[3][3];
    int sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("element[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    
    printf("\nmatrix  sum\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
            sum += arr[i][j];
            if (j==2)
            {
                printf("= %d", sum);
            }     
        }
        sum = 0;
        printf("\n");
    }

    return 0;
}