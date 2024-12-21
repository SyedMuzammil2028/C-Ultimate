#include <stdio.h>
// Call by reference
void swap(int n1, int n2, int *max) { 
    if(n1>n2) {
       *max = n1;
    }
    else {
       *max = n2;
    }
}

int main() {
    int num1, num2, max;
    
    printf("Enter First number: ");
    scanf("%d", &num1);
    printf("Enter Second number: ");
    scanf("%d", &num2);
    swap( num1, num2, &max); // Passing both numbers and max by reference
    
    printf("Max number = %d\n", max);
   
    return 0;
}