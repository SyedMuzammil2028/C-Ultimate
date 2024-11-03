#include <stdio.h>

int main() {
    int num, t1 = 0, t2 = 1, nextTerm = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Fibonacci Series: ");

    while (nextTerm <= num) {
        printf("%d, ", nextTerm);

        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }

    printf("\n");
    return 0;
}