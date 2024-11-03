#include <stdio.h>
// program to sort odd numbers in an array

void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
int countOddNumbers(int arr[],int size){
    int count=0;
    for (int i = 0; i < size; i++){
       if ( arr[i] % 2 == 1 ){
        printf("\nOdd number: %d",arr[i]);
        count++;
       }
    }
    return count;
}

int main(){
    int size;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    inputArray(arr,size);

    printf("\n\nTotal odd numbers in an array is: %d",countOddNumbers(arr,size));

    return 0;
}