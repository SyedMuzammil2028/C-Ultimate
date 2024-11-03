#include <stdio.h>
// program to print address of 3D array elements
int main(){
    printf("\narray[i][j][k] = Address of index\n");
    int array[2][3][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("\narray[%d][%d][%d] = %u",i,j,k,array[i][j][k]);
            }
            // printf("\n");
        }
        // printf("\n");
    }
    return 0;
}