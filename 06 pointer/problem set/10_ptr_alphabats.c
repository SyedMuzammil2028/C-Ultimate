#include <stdio.h>
// program to print alphabat using pointers
void alpabats(char *words) {
    for (char *ch = words; *ch <= 'z'; (*ch)++) {
        printf("%c\n", *ch);
    }
}

int main() {
    char words = 'a';
    alpabats(&words);

    return 0;
}