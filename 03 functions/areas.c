#include<stdio.h>
// Function Deceleratio or prototype

float rectarea(float s,float l);
float sqarea(float s);
float cirarea(float r);
int main(){
    float s,l,r;
    printf(" enter side = ");
    scanf("%f",&s);
    printf(" enter length = ");
    scanf("%f",&l);
    printf(" enter radius = ");
    scanf("%f",&r);
    printf("Square area = %f",sqarea(s));
    printf("\nRectangle area = %f",rectarea(s,l));
    printf("\nCircle area = %f",cirarea(r)); 
}
// Function defination
float rectarea(float s,float l)
{ 
    return s*l;
}
float sqarea(float s)
{
    return s*s;
}
float cirarea(float r)
{
    return 3.14*r*r;
}
