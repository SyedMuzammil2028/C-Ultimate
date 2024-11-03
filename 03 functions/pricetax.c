#include<stdio.h>
// Function Deceleratio or prototype
int price(int p);
int main(){
    int p;
    int ctg;
    printf(" Enter price of numberplate = ");
   scanf("%d",&p);
    printf("\n NOTE:\n On Catogory '1' 15 percent Gst tax\n On Catagory '2' 10 percent Gst tax\n On Catagory '3' 5 percent Gst tax\n Sales tax is same on all catagory numberplate \n");
    printf("Enter catagory = ");
    scanf("%d",&ctg);
    if(ctg==1)
{
   float fp=price(p); 
   printf("Gst tax on the numberplate %f",p*0.15);
   printf(" \nFinal price after all taxes %f",fp+(p*0.15));
}
else if(ctg==2)
{
 int fp=price(p); 
   printf("Gst tax on the numberplate %f",p*0.10);
   printf( " \nFinal price after all taxes %f",fp+(p*0.10));
}
else if(ctg==3)
{
 int fp=price(p); 
   printf("Gst tax on the numberplate %f",p*0.5);
   printf(" \nFinal price after all taxes %f",fp+(p*0.5));
}
else
 printf("\n numberplate not avaliable");
}
// Function defination

int price(int p){ // Perameters
   printf("\nSales Tax on the numberplate %f\n",p*0.25);
   //printf("Final price after sales tax %d",p+=(p*0.25));
    p+=(p*0.25);
    return p;
   }