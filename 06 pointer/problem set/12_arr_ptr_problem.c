#include <stdio.h>

// Function to process the array
void processArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] += 10; // Add 10 to each element
    }
}

int main() {
    int size;

    // Input size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Declare the array
    int arr[size];

    // Input array elements
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Call the function with the array pointer
    processArray(arr, size);

    // Print the modified array
    printf("Modified array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
