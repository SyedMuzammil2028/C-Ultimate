#include <stdio.h>
int main()
{
    FILE *fptr;

    // Open a file in write mode
    fptr = fopen("01.txt", "w");
    if (fptr == NULL) {
        printf("Could not open file for writing\n");
        return 1;
    }

    char myString[100];

    // Read and write multiple strings
    printf("Enter 5 strings to write into the file:\n");
    for (int i = 0; i < 5; i++) {
        printf("String %d: ", i + 1);
        scanf(" %[^\n]", myString);

        // Write the string to the file
        fprintf(fptr, "%s", myString);
    }
    fclose(fptr);

    // Open the file in read mode
    fptr = fopen("filename.txt", "r");
    if (fptr == NULL) {
        printf("Could not open file for reading\n");
        return 1;
    }

    // Read and print the content of the file
    printf("\nContent of the file:\n");
    while (fgets(myString, sizeof(myString), fptr)) {
        printf("%s", myString);
    }

    // Close the file
    fclose(fptr);

    return 0;
}
