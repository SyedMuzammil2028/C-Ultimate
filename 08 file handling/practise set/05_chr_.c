#include <stdio.h>
int main()
{
    FILE *fptr;

    // Open file in read mode
    fptr = fopen("05.txt", "r");
    if (fptr == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    char ch;

    // Read and print each character until EOF
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }

    fclose(fptr); // Close the file after reading
    return 0;
}
