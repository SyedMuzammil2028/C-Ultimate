#include<stdio.h>
int main()
   {
int num,j;
    int sum=0;
    printf("Enter number to find sum of it with starting natural numbers = ");
    scanf("%d",&num);
for(j=num;j>=1;j--)
{
    sum+=j;
    printf("%d\n",j);
    }
printf("sum = %d",sum);
   } 
