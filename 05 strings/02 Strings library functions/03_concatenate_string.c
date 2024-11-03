#include <stdio.h>
#include <string.h>
int main()
{
  char str1[20] = "Hello ";
  char str2[] = "World!";

  // Concatenate str2 to str1 (the result is stored in str1)
  strcat(str1, str2); // this fuction joins both the string

  // Print str1
  printf("%s\n", str1);

  char dest[12] = "holly"; 
  strcat(dest, "Wood!");
  puts(dest);

  char source[20];
  char destination[20];
  int n;

  printf("Enter destination string: ");
  gets(destination);
  printf("Enter source string: ");
  gets(source);
  printf("Enter the value of n: ");
  scanf("%d", &n);
  strncat(destination, source,n);
  printf("\nComnined string is: %s", destination);

  return 0;
}
