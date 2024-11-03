#include <stdio.h>

int main() {
    char name[30];
    char fatherName[30];
    char studentID[20];
    char address[100];
    char phoneNo[30];
    char email[100];

    // Takes input from the user
    printf("Enter name: ");
    gets(name);  // Using gets for input

    printf("Enter father's name: ");
    gets(fatherName);

    printf("Enter student ID: ");
    gets(studentID);

    printf("Enter address: ");
    gets(address);

    printf("Enter phone no: ");
    gets(phoneNo);

    printf("Enter email: ");
    gets(email);

    // Prints the data
    printf("\nName: %s", name);
    printf("\nFather's Name: %s", fatherName);
    printf("\nStudent ID: %s", studentID);
    printf("\nAddress: %s", address);
    printf("\nPhone No: %s", phoneNo);
    printf("\nEmail: %s\n", email);

    return 0;
}
