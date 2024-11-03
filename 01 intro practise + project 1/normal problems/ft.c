#include<stdio.h>
#include<string.h>
int main(){
    int a,b,c,age;
    char name[100];
    printf("Enter name : ");
    scanf("%ls",&name);
    printf("Enter your phone number : \n");
    scanf("%d",&a);
    printf("Which year were born ? \n");
    scanf("%d",&b);
    printf("What is teh current year ? \n");
    scanf("%d",&c);
    age=c-b;
    printf("Your name is %ls\n",name);
    printf("Your number  is %d\n",a);
    printf("Your calculated age  is %d\n",age);
}