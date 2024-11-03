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
    printf("%d",fact);
    return 0;
}
