#include <stdio.h>

int main() {
    int i, j;
    int n = 6; // Size of the heart

    // Upper part of the heart
    for(i = n/2; i <= n; i+=2) {
        // Print spaces on the left side
        for(j = 1; j < n-i; j+=2) {
            printf(" ");
        }

        // Print the first half of the heart
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        // Print spaces between the two halves of the heart
        for(j = 1; j <= n-i; j++) {
            printf(" ");
        }

        // Print the second half of the heart
        for(j = 1; j <= i; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    // Lower part of the heart
    for(i = n; i >= 1; i--) {
        // Print leading spaces
        for(j = i; j < n; j++) {
            printf(" ");
        }

        // Print the inverted triangle part of the heart
        for(j = 1; j <= (i*2)-1; j++) {
            printf("*");
        }

        // Move to the next line
        printf("\n");
    }

    return 0;
}
