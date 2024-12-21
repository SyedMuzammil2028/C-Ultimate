#include <stdio.h>
int main(){
    int num,reminder,ans=0,pow=1;
    printf("\nNumber To Binary Conversion");
    printf("\n----------------------------");
    printf("\nEnter number: ");
    scanf("%d",&num);
     while (num>0)
     {
        reminder=num%2;
        num=num/2;
        ans+=reminder*pow;
        pow=pow*10;
     }
     printf("Binary number: %d",ans);

    return 0;
}