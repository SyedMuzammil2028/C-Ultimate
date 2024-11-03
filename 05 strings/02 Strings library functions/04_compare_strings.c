#include <stdio.h>
#include <string.h>
// comperision of two strings
int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    char str3[] = "Hi";

    // Compare str1 and str2, and print the result
    printf("%d\n", strcmp(str1, str2)); // compares two strings

    // Compare str1 and str3, and print the result
    printf("%d\n", strcmp(str1, str3));

    char str4[] = "Hello";
    char str5[] = "Help";
    // result will be 0 since first 3 characters "Hel" are the same 
    int result = strncmp(str4, str5, 3);
    printf("\n%d",result);
    // result will be negative since 'l' < 'p' in "Hello" vs "Help" 
    result = strncmp(str4, str5, 4);
    printf("\n%d",result);
  return 0;
}