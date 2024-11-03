#include <stdio.h>

int main() {
    int total = 0, num;

    while (1) {
        printf("Enter a number (0 to quit): ");
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        total += num;
        printf("Total: %d\n", total);
    }

    return 0;
}