#include<stdio.h>
//smallest number
int main ()
{
    int x,y,z;
    printf("enter first number = ");
    scanf("%d",&x);
     printf("enter second number = ");
    scanf("%d",&y);
     printf("enter third number = ");
    scanf("%d",&z);
if (x<=y&&x<=z)
{
    printf("%d num is smallest",x);
}
else if(y<=x&&y<=z)
{
     printf("%d num is smallest",y);
}
else if(z<=x&&z<=y)
{
     printf("%d num is smallest",z);
}
else 
{
    printf("invalid input");
}
return 0;
}