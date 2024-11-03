#include<stdio.h>
int main()
{
    int a;
    do
    { // break loop when odd is entered
        printf(" enter number = ");
        scanf("%d",&a);
        if(a%2==1)
        break;
    } while(1);
printf(" \n End");
}