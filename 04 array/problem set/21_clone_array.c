#include <stdio.h>
int main()
{
    int size, i;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++)
    {
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    int cloneArr[size];
    for (i = 0; i < size; i++)
    {
        cloneArr[i] = arr[i];
    }
    
    printf("Original array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nClone array:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d ", cloneArr[i]);
    }
    return 0;
}