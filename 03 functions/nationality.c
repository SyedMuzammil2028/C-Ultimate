#include<stdio.h>
// Function decleration
void namaste();
void salam();

int main(){
    char a;
    printf("Enter nationality\nNOTE:'p' for Pakistani & 'i' for Indian\n= ");
    scanf("%c",&a);
    /*if(a=='p')
    {
    salam();
    }
    else
    namaste();*/
    a=='p'? salam(): namaste(); // Function call
}
// Function defination
void namaste(){
    printf("Namaste");
}
void salam(){
    printf("Asalam Alikum");
}