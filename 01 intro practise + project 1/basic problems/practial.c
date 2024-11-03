#include<stdio.h>
int main()
{

printf("Square of first 10 even numbers");
for( int i=0;i<=10;i=i+2)
{
printf("%d\n",i*i);
}
printf("Cube of first 10 even numbers");
for(int i=0;i<=10;i=i+2)
{
printf("%d\n",i*i*i);
}
return 0;
}