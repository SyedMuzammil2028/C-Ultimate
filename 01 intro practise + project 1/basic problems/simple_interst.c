#include <stdio.h>

int main(){
float p,r,t;
printf(" Enter principle amount = ");
scanf("%f",&p);
printf(" Enter rate  = ");
scanf("%f",&r);
printf(" Enter time  = ");
scanf("%f",&t);
printf(" The Simple intest is %f",(p*r*t)/100);
    return 0;
}