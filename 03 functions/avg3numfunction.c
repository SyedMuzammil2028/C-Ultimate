#include<stdio.h>
// Function Deceleratio or prototype

float avg(float x,float y,float z);
int main(){
    float x,y,z;
    printf(" enter a  three numbers to find its average = ");
   scanf("%f %f %f",&x,&y,&z);
 // Function call   
   avg(x,y,z); // Argument
}
// Function defination
float avg(float x,float y,float z){ // Perameters
   printf("%f\n",(x+y+z)/3);
   }