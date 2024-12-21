#include <stdio.h>
// Call by reference
void square(int *n) { 
    *n = (*n) * (*n); 
    printf("Square = %d\n", *n); 
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    square(&num); // Passing the address of num
    printf("Number = %d\n", num);

    return 0;
}