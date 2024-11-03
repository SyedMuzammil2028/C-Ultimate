#include<stdio.h>
float temp(float tc);
float TEMP(float tf);
int main(){
  float tc,tf;
    printf(" Enter a temperature in celcius  = ");
    scanf("%f",&tc);
    printf(" Temperature in feranhoght %.2f",temp(tc));
    printf("\n Enter a temperature in fahrenhiet  = ");
    scanf("%f",&tf);
    printf(" Temperature in celcius %.2f",TEMP(tf));
}
float temp(float tc){ 
   float tf=(tc*9/5)+32;
    return tf;
   }
float TEMP(float tf)
{
  float tc=(tf-32)*5/9;
  return tc;
}