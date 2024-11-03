#include<stdio.h>
// Function Deceleratio or prototype
float force(float mass);
int main(){
    float mass;
    printf("Enter mass of a body in kg = ");
    scanf("%f",&mass);
    
 // Function call   
  printf("Force on body is = %f N",force(mass));
}
// Function defination
float force(float mass){
     return mass*9.8;
   }
