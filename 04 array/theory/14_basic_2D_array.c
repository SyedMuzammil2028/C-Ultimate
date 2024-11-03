#include <stdio.h>
// Basic 2D array syntex
int main()
{
    int arr[3][2] = {{5, 8}, {3, 7}, {2, 9}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("arr[%d][%d]: %d ", i, j, arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}