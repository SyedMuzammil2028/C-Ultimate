#include <stdio.h>
int main() {
int age;
printf("enter age=");
scanf("%d",&age);
if(age>=18&&age<100)
{
printf(" Adult ");
}
else if(age<18&&age>=5)
{
    printf(" teanager ");
}
else if(age<5&&age>=0)
{
    printf(" baby ");
}
else
{
printf("\n Data does not exist");
}
}