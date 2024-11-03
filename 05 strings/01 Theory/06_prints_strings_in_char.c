#include <stdio.h>
// printing string using loops in character form 
void printingString(char arr[20]);

int main() {
    char firstName[20];
    char lastName[20];
    
    printf("\nEnter first name: ");
    scanf("%s", firstName);
    printf("Enter last name: ");
    scanf("%s", lastName);
    
    printf("\nFirst name : ");
    printingString(firstName);
    printf("\nLast name : ");
    printingString(lastName);
    
    return 0;
}

// using condition arr[i] != '\0' as every strings 
// ends with this null terminater to define it as a string 
void printingString(char arr[20]) {
    for (int i = 0; arr[i] != '\0'; i++) {
        printf("%c", arr[i]);
    }
    printf("\n");
}
