#include <stdio.h>

// Function to calculate the sum of first n natural numbers using recursion
int recursive_sum(int n) {
    if (n == 1) {
        return 1;
    } else {
        return n + recursive_sum(n-1);
    }
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("The sum of the first %d natural numbers is %d\n", n, recursive_sum(n));
    return 0;
}