#include <stdio.h>

int main(){
float p,x,y;
printf(" Enter Percnetage to part to find = ");
scanf("%f",&p);
// printf(" Enter Part = ");
// scanf("%d",&x);
// printf(" Enter whole = ");
// scanf("%d",&y);
float tm = (p/100)*500;
printf("Part = %f",tm);
    return 0;
}