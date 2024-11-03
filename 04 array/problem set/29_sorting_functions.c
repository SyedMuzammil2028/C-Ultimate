#include <stdio.h>
void bubbleSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("\nSorted array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

void selectionSort(int arr[], int size)
{
    int i, j, temp;
    for (i = 0; i < size - 1; i++)
    {
        int minIndex = i;
        for (j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    printf("\nSorted array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

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

    printf("\nOriginal array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    bubbleSort(arr, size);
    // selectionSort(arr,size);
    return 0;
}