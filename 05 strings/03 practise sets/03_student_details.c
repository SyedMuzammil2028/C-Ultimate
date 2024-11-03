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
    fgets(name, sizeof(name), stdin);

    printf("Enter father's name: ");
    fgets(fatherName, sizeof(fatherName), stdin);

    printf("Enter student ID: ");
    fgets(studentID, sizeof(studentID), stdin);

    printf("Enter address: ");
    fgets(address, sizeof(address), stdin);

    printf("Enter phone no: ");
    fgets(phoneNo, sizeof(phoneNo), stdin);

    printf("Enter email: ");
    fgets(email, sizeof(email), stdin);

    // Remove newline characters from strings
    name[strcspn(name, "\n")] = '\0';
    fatherName[strcspn(fatherName, "\n")] = '\0';
    studentID[strcspn(studentID, "\n")] = '\0';
    address[strcspn(address, "\n")] = '\0';
    phoneNo[strcspn(phoneNo, "\n")] = '\0';
    email[strcspn(email, "\n")] = '\0';

    // Prints the data
    printf("\nName: %s", name);
    printf("\nFather's Name: %s", fatherName);
    printf("\nStudent ID: %s", studentID);
    printf("\nAddress: %s", address);
    printf("\nPhone No: %s", phoneNo);
    printf("\nEmail: %s\n", email);

    return 0;
}
