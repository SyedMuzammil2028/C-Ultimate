#include <stdio.h>
// Factorial of a number 
int main() {
    int num,i=1;
    int fact=1;
    printf("Enter number to find Factorial of it = ");
    scanf("%d",&num);
   while(i<=num)
     {
       fact*=i;
       i++;
    }
    printf("%d",fact);
    return 0;
}