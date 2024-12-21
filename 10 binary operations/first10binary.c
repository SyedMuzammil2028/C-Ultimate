#include <stdio.h>
int main()
{
    int reminder, i, num, numtill;
    printf("\nNumber To Binary Conversion");
    printf("\n  ( 1 to entered number )  ");
    printf("\n----------------------------");
    printf("\nEnter number: ");
    scanf("%d", &numtill);
    int arr[32];
    int j;
    for (j = 1; j <= numtill; j++)
    {
        num = j;
        for (i = 0; num > 0; i++)
        {
            reminder = num % 2;
            arr[i] = reminder;
            num = num / 2;
        }
        // printf("Size of array %d\n", i);
        printf("\n%d --> ", j);
        for (i = i - 1; i >= 0; i--)
        {
            printf("%d", arr[i]);
        }
    }
    return 0;
}