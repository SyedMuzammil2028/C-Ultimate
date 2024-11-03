#include <stdio.h>
// to print table of a number 
int main() {
    int num,to,i;
    printf("Enter number to find its table = ");
    scanf("%d",&num);
    printf("also enter number till, you want find its table = ");
    scanf("%d",&to);
    for(  i=num ; i <= num*to ; i+=num)
     {
        printf("%d \n", i);
    }
    return 0;
}