#include <stdio.h>
// input and output string using printf & scanf
int main() {
    char name[30];
    char studentID[20];
    char email[100];

    // Takes input from user
    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter student ID: ");
    scanf("%s", studentID);
    printf("Enter email: ");
    scanf("%s", email);

    // Prints the data
    printf("\nName: %s", name);
    printf("\nStudent ID: %s", studentID);
    printf("\nEmail: %s\n", email);

    return 0;
}
// NOTE: scanf will not identifies space between name
// To over come this drawback fgets()/gets() function is use
// in place of scanf and puts() function is use to print the input values.
