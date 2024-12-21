#include <stdio.h>
int main()
{
    FILE *fptr;
    
    fptr = fopen("02.txt", "r");
    
    int num;
    if(fptr == NULL){
        printf("Could not open file \n");
        return 1;
    }

    fscanf(fptr,"%d",&num);
    printf("The number is: %d\n",num);
    fclose(fptr);

    return 0;
}