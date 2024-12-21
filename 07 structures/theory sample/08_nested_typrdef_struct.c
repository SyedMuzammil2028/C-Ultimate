#include <stdio.h>
#include <string.h>
// Nested structure
typedef struct strength {
    int student_strength;
    int faculty_strength;
}str; 

typedef struct university {
    char campus[50];
    char director[50];
    str s1;
}uni;

int main() {
    uni u1;
    
    // assign value to u1
    strcpy(u1.campus, "Islamabad Campus");
    strcpy(u1.director, "George Orwell");
    u1.s1.student_strength = 1900;
    u1.s1.faculty_strength = 50;

    // print struct variables
    printf("Campus name: %s\n", u1.campus);
    printf("Director: %s\n", u1.director);
    printf("Student strength: %d\n", u1.s1.student_strength);
    printf("Faculty strength: %d\n", u1.s1.faculty_strength);

    return 0;
}