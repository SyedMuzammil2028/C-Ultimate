#include <stdio.h>
#include <string.h>

// struct with typedef NUCS
typedef struct Natinal_University_of_Computer_Science {
    char campus[50];
    char director[50];
    int student_strength;
    int faculty_strength;
} NUCS; // typedef is use to create an alias name for data types
// it is commonly used with structures to simplify the syntax of declaring variables.

int main() {
    // create variable of type NUCS
    NUCS e1;

    // assign value to e1
    strcpy(e1.campus, "Islamabad Campus");
    strcpy(e1.director, "George Orwell");
    e1.student_strength = 1900;
    e1.faculty_strength = 50;

    // print struct variables
    printf("Campus name: %s\n", e1.campus);
    printf("Director: %s\n", e1.director);
    printf("Student strength: %d\n", e1.student_strength);
    printf("Faculty strength: %d\n", e1.faculty_strength);

    return 0;
}