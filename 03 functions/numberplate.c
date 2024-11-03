#include<stdio.h>
// Function Deceleratio or prototype

int main(){
    int c;
    int ctg;
    printf("    Avaliable Numberplates \nPREMIUM: \n111,333,444,555,666,777,888,999,\n786,789,123,321,545,899,920,\n009,008,007,006,005,004,003,\n002,092,804,456,246,220,330,770");
    printf("\nPRIME: \n101,202,303,404,505,606,707,808,909,\n010,020,030,040,050,060,070,080,090,\n011,022,033,044,055,066,077,088,099,\n100,200,300,400,500,600,700,800,900");
    printf("\nGENERAL: \nAny number alloted by government");
    printf("\n\nEnter numberplate no to check out\nprice and its avaliblity = ");
   scanf("%d",&c);
    printf("\n NOTE:\n On Premium Category 25 percent sales tax\n& 15 percent Gst tax \nOn Prime Catagory 15 percent sales tax\n& 10 percent Gst tax \nOn General Catagory 4 percent sales tax\n& 2  percent Gst tax \nRegesteration fess is same on \nall category numberplates \n");
   printf("\n\n Premium catogary = 1\n Prime category = 2\n General category = 3 ");
    printf("\n\nEnter catagory = ");
    scanf("%d",&ctg);
    if(ctg==1)
{
   int p=800000;
   printf("\nSales tax on the numberplate %f",p*0.25);
   printf("\nGst tax on the numberplate %f",p*0.15);
   printf(" \nFinal price after all taxes %f",(p*25)+(p*0.15));
   printf("\nAvaliable");
   }
else if(ctg==2)
{
  int p=450000;
  printf("\nSales tax on the numberplate %f",p*0.15);
   printf("\nGst tax on the numberplate %f",p*0.10);
   printf( " \nFinal price after all taxes %f",(p*15)+(p*0.10));
printf("\nAvaliable");
}
else if(ctg==3)
{
   int p=75000;
   printf("\nSales tax on the numberplate %f",p*0.04);
   printf("\nGst tax on the numberplate %f",p*0.02);
   printf(" \nFinal price after all taxes %f",(p*0.04)+(p*0.02));
printf("\nAvaliable");
}
else
 printf("\n numberplate not avaliable");
}