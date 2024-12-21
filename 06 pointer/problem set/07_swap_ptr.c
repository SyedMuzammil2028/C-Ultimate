#include <stdio.h>
// Call by reference
void swap(int *n1, int *n2) { 
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

int main() {
    int num1, num2;
    
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    swap( &num1, &num2); // Passing the address of both numbers
    
    printf("\nFirst number = %d\n", num1);
    printf("Second number = %d\n", num2);

    return 0;
}