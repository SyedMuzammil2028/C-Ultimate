#include <stdio.h>
// program to count positive numbers in an array

void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}

int positiveNumbers(int arr[],int size){
    int no_of_positive=0;
    for (int i = 0; i < size; i++){
        if(arr[i]>0){
           no_of_positive++;
        }
    }
        return no_of_positive;
}

int main()
{
    int size;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    inputArray(arr,size);

   printf("\nNumber of positive numbers in the array is: %d",positiveNumbers(arr,size));
   
   return 0;
}