#include <stdio.h>
#include <string.h>
// strlen () function returns the length of the string
int main()
{   
    char alphabet1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet1));
    
    // difference between the strlen vs sizeof
    char alphabet2[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%d\n", strlen(alphabet2)); // 26
    // as it will also store the null character at the end of the string
    printf("%d\n", sizeof(alphabet2)); // 27 

    char alphabet3[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    // only find the size of string
    printf("%d\n", strlen(alphabet3)); // 26
    // indecates the size of the whole string
    printf("%d\n", sizeof(alphabet3)); // 50

    char sting[]="String with spaces";
    printf("%d\n", strlen(sting)); // 18
    printf("%d\n", sizeof(sting)); // 19
    
    char str[] = "Hello"; 
    int len = strlen(str); // len will be 5 
    int size = sizeof(str); // size will be 6 bytes
    printf("%d\n", len); // 5
    printf("%d\n", size); // 6
    
    return 0;

}

// strlen(str) - Returns  the  number  of  characters  in  a  string  (excluding  the  null terminator)  
// –  strlen  vs  sizeof:  strlen  returns  you  the  length  of  the  string  stored  in  an  array, 
// however sizeof returns the total allocated size assigned to the array.