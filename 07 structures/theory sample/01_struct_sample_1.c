#include <stdio.h>
#include <string.h>

struct student {
    char name[30];
    char rollNo[10];
    int idNO;
    float cgpa;
    char branch[20];
};
// } student1,student2;

int main() {
    struct student S1;
    struct student S2 = {"Haseeb Ahmed", "24k-1453", 2431, 7.32, "AI"};

    S1.idNO = 2000;
    S1.cgpa = 8.5;
    // S1.branch="CSE";
    strcpy(S1.branch, "CSE");
    strcpy(S1.name, "Ahsan");
    strcpy(S1.rollNo, "24k-2000");

    printf("\nStudent 1 details:");
    printf("\nName: %s", S1.name);
    printf("\nRoll no: %s", S1.rollNo);
    printf("\nID: %d", S1.idNO);
    printf("\nCGPA: %.2f", S1.cgpa);
    printf("\nBranch: %s\n", S1.branch);

    printf("\nStudent 2 details:");
    printf("\nName: %s", S2.name);
    printf("\nRoll no: %s", S2.rollNo);
    printf("\nID: %d", S2.idNO);
    printf("\nCGPA: %.2f", S2.cgpa);
    printf("\nBranch: %s\n", S2.branch);

    return 0;
}
