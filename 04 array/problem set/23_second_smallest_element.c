#include <stdio.h>
int main()
{
    int size, i, min = 100, second_min = 100;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nArray:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    for (i = 0; i < size; i++)
    {
        if (min > arr[i])
        {
            second_min = min;
            min = arr[i];
        }
        else if (second_min > arr[i] && arr[i] != min)
        {
            second_min = arr[i];
        }
    }
    printf("\n\nMaximum element is: %d\n", min);
    printf("Second maximum element is: %d\n", second_min);

    return 0;
}