#include <stdio.h>
#include <string.h>

void displayMethod1(char words[3][10]) {
    for (int i = 0; i < 3; i++) {
        // codition use that length of string is found then in inner loop 
        // loop will run till length of string
        int length = strlen(words[i]);
        for (int j = 0; j < length; j++) {
            printf("%c ", words[i][j]);
        }
        printf("\n");
    }
}

void displayMethod2(char words[3][10]) {
    for (int i = 0; i < 3; i++) {
        // condition use that inner loop will run until words[i][j] is not equal to null terminater 
        // As in every string there is a null terminater at the end
        for (int j = 0; words[i][j] != '\0'; j++) { // 
            printf("%c ", words[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char words[3][10] = {"Hello", "World", "C"};
    // Output each character individually
    displayMethod1(words);
    displayMethod2(words);
    return 0;
}
