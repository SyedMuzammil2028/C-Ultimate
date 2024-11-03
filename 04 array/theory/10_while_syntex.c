#include <stdio.h>
// While loop syntex for array
int main()
{
    int size;

    printf("Enter size of an array: ");
    scanf("%d", &size);
    
    int arr[size];
    int idx=0;
    while(idx<size)
    {
        printf("Enter element %d) ", idx+1);
        scanf("%d", &arr[idx]);
        idx++;
    }
    
    idx=0;
    while(idx<size)
    {
        printf("array[%d] = %d\n", idx, arr[idx]);
        idx++;
    }
    return 0;
}