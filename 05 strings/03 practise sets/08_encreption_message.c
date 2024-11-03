#include <stdio.h>

int main() {
    char str[200];
    int i;
    printf("Enter message to encrypt: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] != '\n') {  // Avoid incrementing newline character
            str[i] = str[i] + 1;
        }
    }
    
    str[i]='\0';
    printf("\nEncrypted message: %s\n", str);
    return 0;
}
