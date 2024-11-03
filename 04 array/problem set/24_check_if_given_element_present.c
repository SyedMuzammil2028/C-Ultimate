#include <stdio.h>
int main(){
    int size, i, num;
    int present_flag = 0;

    printf("Enter size of an array: ");
    scanf("%d", &size);
    int arr[size];

    for (i = 0; i < size; i++){
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("\nEnter number to check if it is present: ");
    scanf("%d", &num);

    for (i = 0; i < size; i++){
        if (arr[i] == num){
            present_flag = 1;
            break;
        }
    }

    if (present_flag == 1){
        printf("%d is present in the array.\n", num);
    }
    else{
        printf("%d is not present in the array.\n", num);
    }

    return 0;
}