#include <stdio.h>

// Define a structure
struct vector {
    int x;
    int y;
} v1, v2, sum;

int main() {
    // Input for vector 1
    printf("\nEnter the components of vector 1: ");
    scanf("%d %d", &v1.x, &v1.y);

    // Input for vector 2
    printf("\nEnter the components of vector 2: ");
    scanf("%d %d", &v2.x, &v2.y);

    sum.x =v1.x+ v2.x;
    sum.y = v1.y + v2.y;

    // Display the sum
    printf("\nSum of vector 1 and vector 2: %d %d\n", sum.x, sum.y);

    return 0;
}
