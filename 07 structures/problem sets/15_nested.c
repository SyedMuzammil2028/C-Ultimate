#include <stdio.h>

struct address
{
    char add[100];
};

struct student
{
    char name[50];
    float gpa;
    struct address address; 
};

int highgpa(struct student s[], int n) {
    int max = 0;
    for (int i = 1; i < n; i++) { 
        if (s[i].gpa > s[max].gpa) {
            max = i;
        }
    }
    return max;
}

int main() {
    struct student s[5];
    
    for (int i = 0; i < 5; i++) {
        printf("\nEnter name: ");
        scanf("%[^\n]", s[i].name); // Get full name
        printf("GPA: ");
        scanf("%f", &s[i].gpa);
        printf("Address: ");
        scanf("%[^\n]", s[i].address.add); // Fixed address typo
    }
    
    int max = highgpa(s, 5);
    printf("\nName: %s", s[max].name);
    printf("\nGPA: %.2f", s[max].gpa); // Display GPA with two decimal places
    printf("\nAddress: %s", s[max].address.add); // Fixed typo in address
    return 0;
}
