#include <stdio.h>

int main()
{
    int n;
    printf(" Enter no of lines = ");
    scanf("%d", &n);
    // loop for no of lines
    for (int i = 0; i < n; i++) 
    {
        // loop to print star "*"
        for ( int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}   