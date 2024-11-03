#include<stdio.h>
int main()
{
    int a;
    do
    {
        printf(" enter number = ");
        scanf("%d",&a);
        if(a%2==1)
        break;
    } while(1);
printf(" \n End");
}