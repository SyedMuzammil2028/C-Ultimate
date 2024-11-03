#include <stdio.h>
// Factorial of a number
int main()
{
  int num, i = 1, fact = 1;
  printf("Enter number to find Factorial of it = ");
  scanf("%d", &num);
  for (i = 1; i <= num; i++)
  {
    fact *= i;
  }
  printf("Factorial of %d is %d",num, fact);
  return 0;
  // while (i<=num)
  // {
  //   fact*=i;
  //   i++;
  // }
  // printf("Factorial of %d is %d",num, fact);
}