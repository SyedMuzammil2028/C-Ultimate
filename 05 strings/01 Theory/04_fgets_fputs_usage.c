#include <stdio.h>
#include <string.h>
// As gets is unsafe and odd so fgets is use as it is updated 
// syntex for fgets --> fgets(string_name, sizeof(string), stdin)
int main() {
    char name[30];
    char studentID[20];
    char email[100];

    // Takes input from user
    printf("Enter name: ");
    fgets(name, 30, stdin); // fgets(string_name, sizeof(string), stdin) to input the string
    name[strcspn(name, "\n")] = '\0';  // Remove newline character

    printf("Enter student ID: ");
    scanf("%s", studentID); // use scanf as there is no space in id
    // When ever gets function is use in program use getchar when using scanf
    getchar();  // Clear the newline left in buffer by scanf 
    
    printf("Enter email: ");
    fgets(email, 100, stdin);
    email[strcspn(email, "\n")] = '\0';  // Remove newline character

    // Prints the data
    printf("\n--- User Information ---\n");
    printf("Name: ");
    fputs(name,stdout); // fputs does not print the new line automatically
    printf("\nStudent ID: %s\n", studentID);
    printf("Email: ");
    puts(email); // puts print the new line automatically

    return 0;
}

// The line name[strcspn(name, "\n")] = '\0'; is used to remove the newline character ('\n') that fgets() typically adds at the end of a string. Here’s how it works in detail:

// fgets() Behavior:

// When you use fgets() to read a string, it captures the newline character ('\n') if the user presses "Enter" (and if there’s space in the buffer).
// This means if you input "John\n" with fgets(name, 30, stdin), the name array actually contains "John\n".
// strcspn() Function:

// strcspn() is a function in <string.h> that calculates the length of the initial segment of a string that doesn’t contain any characters from a specified set.
// In this line, strcspn(name, "\n") returns the index of the newline character ('\n') in the name string.
// Setting '\0' at the Newline’s Position:

// name[strcspn(name, "\n")] = '\0'; replaces the newline character with a null terminator ('\0'), which effectively cuts off the newline.
// After this operation, name would contain "John" instead of "John\n".
// In summary:

// This line searches for '\n' in the name string.
// It replaces '\n' with '\0' (the null terminator), effectively removing the newline character.






