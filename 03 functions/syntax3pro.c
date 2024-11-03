#include<stdio.h>
// Function Deceleratio or prototype
int sum(int a,int b);
int main(){
    int a,b;
    printf(" enter a number = ");
    scanf("%d",&a);
    printf(" enter another number = ");
    scanf("%d",&b);
    //sum(a,b);
  printf("Sum is = %d",sum(a,b)); // function call
}
// Function defination
int sum(int a,int b)
{  //printf("Sum is = %d",a+b);
    return a+b;
   }
