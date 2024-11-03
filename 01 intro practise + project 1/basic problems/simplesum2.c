#include<stdio.h>
int main() {
    int num,i,j;
    int sum=0;
    printf("Enter number to find sum of it with starting natural numbers = ");
    scanf("%d",&num);
    for( i=1,j=num;i<=num&&j>=1;i++,j--)
     {
       sum+=i;
     printf("%d\n",j);
    }
    printf("Sum =%d\n\n",sum);
    return 0;
}