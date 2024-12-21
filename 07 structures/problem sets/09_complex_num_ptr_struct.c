#include <stdio.h>

// Define a structure
struct vector {
    int real;
    int complex;
} num1, num2, sum;

// Function to calculate the sum of two vectors
void calculation(struct vector num1, struct vector num2, struct vector *sum) {
    sum->real = num1.real + num2.real;
    sum->complex = num1.complex + num2.complex;
}

int main() {

    printf("For first number,\n");
    printf("Enter real part: ");
    scanf("%d", &num1.real);
    printf("Enter imaginary part: ");
    scanf("%d", &num1.complex);

    printf("For second number, \n");
    printf("Enter real part: ");
    scanf("%d", &num2.real);
    printf("Enter imaginary part: ");
    scanf("%d", &num2.complex);

    // Calculate the sum of the vectors
    calculation(num1, num2, &sum);

    // Display the sum
    printf("\nSum of real part and complex part: %d  %d\n", sum.real, sum.complex);

    return 0;
}
