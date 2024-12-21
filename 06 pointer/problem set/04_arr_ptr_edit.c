#include <stdio.h>
int main() {

  int x[5] = {1, 2, 3, 4, 5};
  int* ptr;

  // ptr is assigned the address of the third element
  ptr = &x[2]; 

  printf("*ptr = %d \n", *ptr);
  printf("*(ptr+1) = %d \n", *(ptr+1)); 
  printf("*(ptr-1) = %d\n\n", *(ptr-1));  
  
  // update the value of the first element and second element
  *ptr = 10;
  *(ptr + 1) = 17;

   printf("*ptr = %d\n", *ptr);
   printf("*(ptr+1) = %d\n\n", *(ptr + 1));

   for (int i = 0; i < 5; i++)
   {
     printf("%d ", *(x+i));
   }
   
  return 0;
}