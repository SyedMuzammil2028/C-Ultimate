#include <stdio.h>
// Call by value
void square(int n) {
    n = n * n;
    printf("Square = %d\n", n);
}

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);
    square(num); // Pass the value of num
    printf("Number = %d\n", num);

    return 0;
}