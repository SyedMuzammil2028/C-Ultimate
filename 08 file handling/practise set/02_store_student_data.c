#include <stdio.h>
int main()
{
    FILE *fptr;

    // Open a file in write mode
    fptr = fopen("02.txt", "w");
    if (fptr == NULL) {
        printf("Could not open file for writing\n");
        return 1;
    }

    char name[100];
    int id;
    float gpa;
    
    printf("Enter your name: ");
    scanf("%s", name );
    printf("Enter your id: ");
    scanf("%d", &id );
    printf("Enter your gpa: ");
    scanf("%f", &gpa);

    fprintf(fptr, "%s", name);
    fprintf(fptr, "%d", id);
    fprintf(fptr, "%f", gpa);

    return 0;
}
