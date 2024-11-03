#include <stdio.h>
#include <string.h>
// copying strings
int main() 
{
  char str1[20] = "Hello World!";
  char str2[20];

  // This function copys the string as '=' assignment is not workable on strings
  strcpy(str2, str1); // Copy str1 to str2

  // Print str2
  printf("%s\n", str2);
  
  char src[] = "This is source"; 
  char dest[] = "This is destination"; 
  strcpy(dest, src);  // dest will contain "this is source"
  puts(dest);
  // Note that the size of str2 should be large enough to 
  // store the copied string (20 in our example).
  
  return 0;
}