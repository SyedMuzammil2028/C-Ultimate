#include <stdio.h>
// program to count particular numbers in an array

void inputArray(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);
    }
}
int countNumbers(int arr[],int size,int num){
    int count=0;
    for (int i = 0; i < size; i++){
       if ( arr[i] == num  ){
        count++;
       }
    }
    return count;
}

int main(){
    int size,num;
    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    inputArray(arr,size);

    printf("\nEnter number to find how many times it occurs: ");
    scanf("%d",&num);

    printf("\nTotal times %d numbers occures in an array is %d times",num,countNumbers(arr,size,num));

    return 0;
}