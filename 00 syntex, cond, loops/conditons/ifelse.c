#include <stdio.h>
int main()
{
int age;
printf("enter age=");
scanf("%d",&age);
if(age>=18&&age<100)
{
printf(" Adult ");
}
else
{
printf(" Teanager");
}
}