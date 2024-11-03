#include <stdio.h>
int main()
{
    // initialisation of an array
    char str[] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
    char strg[] = {"String"};
    char strp[] = "Hello to the String topic!";

    printf("%s\n", str);
    printf("%s\n", strg);
    printf("%s\n", strp);

    char message[] = "Good to see you,";
    char fname[] = "John";

    printf("%s %s!", message, fname);
    return 0;
}