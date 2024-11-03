#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf(" enter number = ");
        scanf("%d",&a);
        if(a%7==0)
        break;
    } while(1);
printf(" \n End");
}