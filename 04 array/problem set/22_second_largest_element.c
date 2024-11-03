#include <stdio.h>
int main()
{
    int size, i, max = 0, second_max = 0;
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
        if (max < arr[i])
        {
            second_max = max;
            max = arr[i];
        }
        else if (second_max < arr[i] && arr[i] != max)
        {
            second_max = arr[i];
        }
    }
    printf("\n\nMaximum element is: %d\n", max);
    printf("Second maximum element is: %d\n", second_max);

    return 0;
}