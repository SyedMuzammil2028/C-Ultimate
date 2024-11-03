#include <stdio.h>
// For loop syntex for array
int main()
{
    int size, i;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d) ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        printf("\narray[%d]=%d", i, arr[i]);
    }

    return 0;
}