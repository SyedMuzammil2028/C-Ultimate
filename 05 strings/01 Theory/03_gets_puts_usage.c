#include <stdio.h>
// NOTE: scanf will not identifies space between name
// To over come this drawback fgets()/gets() function is use
// in place of scanf and puts() function is use to print the input values
// gets --> for input string
// puts --> to print string
int main() {
    char name[30];
    char studentID[20];
    char email[100];

    // Takes input from user
    printf("Enter name: ");
    gets(name);  // Note: gets() is generally unsafe
    printf("Enter student ID: ");
    gets(studentID);

    printf("Enter email: ");
    gets(email);

    // Prints the data
    printf("\n--- User Information ---\n");
    puts(name);
    puts(studentID);
    puts(email);

    return 0;
}
