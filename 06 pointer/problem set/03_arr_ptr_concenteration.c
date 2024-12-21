#include <stdio.h>

int main(){
    int array[]={1,3,6,7,9};
    // print the value of index 3
    printf("\n%d",*(array+2)); 
    // does not print the value of index 
    // as index in out of array hence contains garbage value
    printf("\n%d",*(array+5)); 
    return 0;
}