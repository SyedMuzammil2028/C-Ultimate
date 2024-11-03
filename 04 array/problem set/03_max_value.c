#include <stdio.h>
// program to find maximum element in an array
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

    int max = arr[0];

    for (i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("\nmaxium value in array is: %d", max);

    return 0;
}