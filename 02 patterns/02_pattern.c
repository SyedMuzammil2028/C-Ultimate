#include <stdio.h>

int main()
{
    // int n;
    // printf(" Enter no of lines = ");
    // scanf("%d", &n);
    // loop for no of lines
    for (int i = 10; i>0; i--) 
    {
        // loop to print star "*"
        for ( int j = 10; j >i-1; j--)
        {
            printf("*");
            
        }
        printf("\n");
    }
    return 0;
}   