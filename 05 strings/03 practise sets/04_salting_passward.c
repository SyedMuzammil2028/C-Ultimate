#include <stdio.h>
#include <string.h>
// program to salt the passward
int main()
{
    char password[100];        
    printf("Enter password: ");
    scanf("%s", password);        

    char salt[] = "_m@dras_786";  // Salt to append to the password
    char newpassword[200];        

    // Copy the original password to newpassword
    strcpy(newpassword, password);
    
    // Concatenate the salt to newpassword
    strcat(newpassword, salt);

    // Print the resulting password with salt added
    printf("\nSalted password: ");
    puts(newpassword);

    return 0;
}
