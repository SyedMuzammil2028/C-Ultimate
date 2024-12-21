#include <stdio.h>
int main()
{
    FILE *fptr;

    // Open file in write mode
    fptr = fopen("04.txt", "w");
    if (fptr == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (int i = 1; i <= num; i++) {
    if (i % 2 == 0) {
        // When num is even, write (i + 2) from 1 to num
            fprintf(fptr, "%d\n", i);
        }
    }

    fclose(fptr);
    printf("Numbers written to q4.txt successfully.\n");

    return 0;
}
