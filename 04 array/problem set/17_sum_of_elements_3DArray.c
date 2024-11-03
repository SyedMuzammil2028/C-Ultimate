#include <stdio.h>
// program to find sum of matrix of element 
int main()
{
    int arr[2][3][3];
    int sum = 0;
    printf("Enter the elements of the 3D array:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("element[%d][%d][%d]: ", i, j, k);
                scanf("%d", &arr[i][j][k]);
            }
        }
        printf("\n");
    }

    printf("\nOriginal matrix:\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
        }
        printf("\n");
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                sum += arr[i][j][k];
            }
        }
        // Printing the sum of each page
        printf("Sum of page %d is %d\n", i, sum);
        sum = 0;
    }

    return 0;
}