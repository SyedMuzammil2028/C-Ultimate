#include <stdio.h>
// Call by value
void address(int n) {
    printf("Address = %u\n", &n);
}
// Call by reference
void Address(int *n) {
    printf("Address = %u\n", n);
}

int main() {
    int num = 4;

    // address(num); // Passing the value of num
    // printf("address = %u\n", &num); // Address will be different same as it is passed by value and creates copy of the value
    
    Address(&num); // Passing the address of num
    printf("Address = %u\n", &num); // Address will be same as it is passed by reference

    return 0;
}   