#include <stdio.h>
// sum of first natural numbers 
int main() {
    int num,i;
    int fact=0;
    printf("Enter number to find sum of it with starting natural numbers = ");
    scanf("%d",&num);
    for( i=1;i<=num;i++)
     {
       fact+=i;
    }
    printf("Sum =%d\n\n",fact);
    
    for( i=num;i>=1;i--)
     {
       printf("%d\n",i);
    }
    return 0;
}