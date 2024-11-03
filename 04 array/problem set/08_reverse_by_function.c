#include <stdio.h>
// program to reverse an array by swapping using functions
void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
void reverseArray(int arr[],int size){
    for (int i = 0; i < size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size-i-1];
        arr[size-i-1] = temp;
    }
}
void  printArray(int arr[],int size){
    for (int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}
int main(){
    int size;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    inputArray(arr,size);

    printf("\nOriginal array: ");
    printArray(arr,size);
    
    reverseArray(arr,size);

    printf("\nReversed array: ");
    printArray(arr,size);
    return 0;
}