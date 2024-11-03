#include <stdio.h>
// program to find minimum element in an array
int main()
{
    int size, i;
    
    printf("Enter size of an array: ");
    scanf("%d", &size);

    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("\nminium value in array is: %d", min);

    return 0;
}