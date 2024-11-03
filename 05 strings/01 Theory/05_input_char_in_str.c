#include <stdio.h>
// program to input the string using characters
int main()
{
    char str[100]; // Declare a character array to store the input string
    int ch = 0;    // Variable to store each character input, initialized to 0
    int i = 0;     // Index for storing characters in the array

    printf("Enter characters for the string (press Enter to finish): ");

    // Loop to read each character until Enter (newline) is pressed or array is full
    while (ch != '\n' && i < 99)
    {
        // Read a single character from standard input
        scanf("%c", &ch);

        // Only add the character to the array if it is not a newline
        if (ch != '\n')
        {
            str[i] = ch; // Store the character in the array
            i++;         // Move to the next position in the array
        }
    }

    // Null-terminate the string to mark the end for printing
    str[i] = '\0';

    // Output the resulting string
    puts(str);

    return 0;
}
