#include <stdio.h>
int main()
{
    int size, i, j;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < size - 1; i++)
    {
        int smallestIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[smallestIndex])
            {
                smallestIndex = j;
            }
            int temp = arr[i];
            arr[i] = arr[smallestIndex];
            arr[smallestIndex] = temp;
        }
    }

    printf("\nSorted array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}