#include<stdio.h>
// Function Deceleratio or prototype

void table(int n);
int main(){
    int n;
    printf(" enter a number to find its table = ");
    scanf("%d",&n);
    
 // Function call   
   table(n); // Arguments
}
// Function defination
void table(int n)// Perameters
{  
   //for(int i=n;i<=n*10;i+=n)
    //printf("%d\n",i);
   for(int i=1;i<=10;i++)
   printf("%d\n",i*n);
   }
