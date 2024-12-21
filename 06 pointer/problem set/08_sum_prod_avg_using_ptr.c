#include <stdio.h>
void calculate(int a,int b, int *sum, int *prod, float *avg) {
    *sum = a + b;
    *prod = a * b;
    *avg = (a + b) / 2.0;
}

int main() {
    int num1, num2;
    int sum, prod;
    float avg;

    printf("Enter two numbers: ");
    scanf("%d",&num1);
    printf("Enter two numbers: ");
    scanf("%d",&num2);

    calculate(num1,num2,&sum,&prod,&avg); // Pass the address of sum, prod, avg

    printf("Sum = %d, prod = %d, avg = %.2f",sum, prod, avg);

    return 0;
}