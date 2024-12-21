#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

    // Allocate memory for 5 integers
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input 5 numbers
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &ptr[i]);
    }

    // Reallocate memory for 8 integers
    ptr = (int *)realloc(ptr, 8 * sizeof(int));
    if (ptr == NULL) {
        printf("Memory reallocation failed!\n");
        return 1;
    }

    // Input 3 additional numbers
    printf("Enter 3 more numbers:\n");
    for (i = 5; i < 8; i++) {
        scanf("%d", &ptr[i]);
    }

    // Print all 8 numbers
    printf("\nNumbers in the array:\n");
    for (i = 0; i < 8; i++) {
        printf("Number at index %d is %d\n", i, ptr[i]);
    }

    // Free allocated memory
    free(ptr);

    return 0;
}
