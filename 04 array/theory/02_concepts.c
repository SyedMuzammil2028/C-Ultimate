#include <stdio.h>
int main()
{
    // int arr[];  // Declare an array without size is error 
    int arr[]={1,2,3,4,5}; // Declare & initialize an array without size is correct
    int arr[20];  // Declare an array with size is correct
    
    printf("\n%d",arr[4]);
    return 0;
}