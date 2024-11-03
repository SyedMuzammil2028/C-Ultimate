#include <stdio.h>
int main() {
int marks;
printf("enter marks =");
scanf("%d",&marks);
if(marks<=100&&marks>=90)
{
printf(" A+ grade");
}
else if(marks>=70&&marks<90)
{
    printf(" A grade");
}
else if(marks>=30&&marks<70)
{
    printf(" B grade");
}
else if(marks<30&&marks>=0)
{
printf(" C grade");
}
else
{
    printf("marks does not exist");
}
printf(" \n Thank you");
}