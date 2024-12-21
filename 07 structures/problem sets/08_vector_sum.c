#include <stdio.h>

// Define a structure
struct vector {
    int x;
    int y;
} v1, v2, v3;

// Function to calculate the sum of two vectors
void calculation(struct vector v1, struct v     ector v2) {
    return v3 = { v1.x + v2.x, v1.y + v2.y};
}

int main() {
    // Input for vector 1
    printf("\nEnter the components of vector 1: ");
    scanf("%d %d", &v1.x, &v1.y);

    // Input for vector 2
    printf("\nEnter the components of vector 2: ");
    scanf("%d %d", &v2.x, &v2.y);

    // Calculate the sum of the vectors
    
    // Display the sum
    printf("\nSum of vector 1 and vector 2: %d %d\n", calculation(v1, v2));

    return 0;
}
