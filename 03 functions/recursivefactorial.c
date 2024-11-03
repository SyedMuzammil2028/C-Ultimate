#include<stdio.h>
int sum(int n); 
int main()
{ int n;
    printf("Enter positive number = ");
    scanf("%d",&n);
  printf("The factorial of numbers is %d",sum(n));
  return 0;
}
// Recursive Function
int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    return n*sum(n-1);        
}