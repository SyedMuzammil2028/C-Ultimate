#include <stdio.h>
// program to reverse array using pointers
int main() {
    int n;
    printf("\nEnter length of array: ");
    scanf("%d", &n);
    int arr[n];
    
    printf("\nEnter elements in array: ");
    for (int i = 0; i < n; i++) {
        scanf("\n%d", arr+i);
    }
    printf("\nArray in reverse order: ");
    for (int i = n-1; i >= 0; i--) {
        printf("\n%d", *(arr+i));
    }

    return 0;
}