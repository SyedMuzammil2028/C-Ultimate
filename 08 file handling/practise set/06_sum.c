#include <stdio.h>
int main()
{
    FILE *fptr;

    fptr = fopen("06.txt", "r");
    if (fptr == NULL) {
        printf("Could not open file\n");
        return 1;
    }
    
    int a;
    fscanf(fptr, "%d", &a);
    printf("%d\n", a);
    int b;
    fscanf(fptr, "%d", &b);
    printf("%d\n", b);

    fclose(fptr); 
     
    fptr = fopen("q6.txt", "w");
    if (fptr == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    fprintf( fptr, "%d", a+b);
    fclose(fptr);
    return 0;
}
