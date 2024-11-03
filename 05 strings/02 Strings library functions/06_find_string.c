#include <stdio.h> 
int main() { 
    char words[3][10] = {"Hello", "World", "C"}; 
    // Output each character individually 
    for (int i = 0; i < 3; i++) { 
        for (int j = 0; words[i][j] != '\0'; j++) { 
            printf("%c ", words[i][j]); 
        } 
        printf("\n"); 
    } 
    return 0; 
}