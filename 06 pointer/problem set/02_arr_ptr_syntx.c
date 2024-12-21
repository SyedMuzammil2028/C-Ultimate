#include <stdio.h>
// Syntex of array using pointers
int main()
{
    int size, i;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    // int *ptr = &arr[0];
    int *ptr = arr;

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", (ptr+i));
    }

    for (i = 0; i < size; i++) {
        printf("\narray[%d]: %d", i, *(ptr+i));
    }
    return 0;
}