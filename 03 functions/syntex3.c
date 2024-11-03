#include<stdio.h>
// Function Deceleratio or prototype
int sum(int a,int b);
int main(){
    int a,b;
    printf(" enter a number = ");
    scanf("%d",&a);
    printf(" enter another number = ");
    scanf("%d",&b);
 // Function call   
  int plus=sum(a,b); // Argument
  printf("Sum is = %d",plus);
}
// Function defination
int sum(int a,int b){ //Perimeter
    //printf("Sum is = %d",a+b);
    return a+b;
   }
