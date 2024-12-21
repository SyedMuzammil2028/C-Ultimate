#include <stdio.h>
int main()
{
    // string can be modified when is decleared with pointer
    char *str = "Hello world";
    puts(str);
    str = "Hello world again";
    puts(str);

    // but not when is decleared with array
    // char str[]="Hello world";
    // puts(str);
    // str[] = "Hello world again";
    // puts(str);

    return 0;
}