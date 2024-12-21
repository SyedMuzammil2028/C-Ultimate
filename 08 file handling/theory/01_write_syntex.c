#include <stdio.h>
int main()
{
    FILE *fptr;
    
    fptr = fopen("01.txt", "w");
    
    int num;
    if(fptr == NULL){
        printf("Could not open file \n");
        return 1;
    }
    
    printf("Enter num: ");
    scanf("%d",&num); 

    fprintf(fptr,"%d",num);
    fclose(fptr);

    return 0;
}