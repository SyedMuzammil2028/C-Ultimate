#include<stdio.h>
int main()
{
    int i,a;
    for(i=1;i<25;i++)
    {
        printf(" enter number = ");
        scanf("%d",&a);
        if(a%2==1)
        break;
    }
printf(" \n End");
}