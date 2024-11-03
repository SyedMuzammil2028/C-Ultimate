#include <stdio.h>
int main()
{
int marks;
printf("enter marks =");
scanf("%d",&marks);
if(marks>=30&&marks<=100)
printf(" Pass ");
else if (marks<30&&marks>=0)
printf(" fail ");
else
printf(" Invalid marks ");

//marks>=30 ? printf(" Pass "): printf(" Fail ");

}