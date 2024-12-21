#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;   
    
    // print memory address of arr and array first element
	printf("Address of arr[0]: %u, Address of arr: %u\n\n",  &arr[0], arr); 
    // here shows that the memory address of the first element is the same as the memory address of the array
    // this is because arrays in C are stored in contiguous memory locations

    // prints : Address of arr[0]: 100, Value: 10
	printf("Address of arr[0]: %u, Value: %d\n", arr, *arr); 
    // prints : Address of arr[1]: 104, Value: 20
	printf("Address of arr[1]: %u, Value: %d\n", &arr[1], *(arr+1)); 
    // prints : Address of arr[2]: 108, Value: 30
    printf("Address of arr[2]: %u, Value: %d\n\n", &arr[2], *(arr+2));
	
    // print the memory address of the pointer p 
    printf("Address of arr[0]: %u, Value: %d\n", p, *p);
    printf("Address of arr[1]: %u, Value: %d\n", (p + 1), *(p + 1));
    printf("Address of arr[2]: %u, Value: %d\n\n", (p + 2), *(p + 2));

    // hence array can be printed with pointer of *arr 
    // or by pointer variable *p

    // getting the value through pointer 
    for (int i = 0; i < 3; i++) {
        printf("Value of arr[%d]: %d\n", i, *(p + i));
    }
    
    // getting the value through pointer arithmetic 
    for (int i = 0; i < 3; i++) {
        printf("Value of arr[%d]: %d\n", i, *p);
        p++;
    }

    return 0;
}
