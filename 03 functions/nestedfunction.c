#include<stdio.h>
// Function decleration
void hello();
void salam();
void greed();
int main(){
    char a;
    hello(); // Function call
}
// Function defination
void hello(){
    salam();
    greed();
}
void salam(){
    printf("Asalam Alikum");
}
void greed(){
    printf("\nKeam cho majee ma");
}