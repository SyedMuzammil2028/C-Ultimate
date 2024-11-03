#include<stdio.h>
 int main() 
 {
    int num,to,i;
    printf("Enter number to find its table = ");
    scanf("%d",&num);
    //printf("also enter number till, you want find its table = ");
   //scanf("%d",&to);
    for( i=10;i>=1;i--)
     {
        printf("%d \n", i*num);
    }
    return 0;
}