#include <stdio.h>
struct Student{
    int id;
    char name[50];
    float marks;
};

void printStudent(struct Student s){
    printf("ID: %d, Name: %s, Marks: %.2f\n", s.id, s.name, s.marks);
    s.id = 2;
}

int main(){
    struct Student student1 = {1, "Haseeb Ahmed", 85.5};
    printStudent(student1);
    printf("rollno id: %d", student1.id); // this shows that the value of id has changed as it is pass by value
    return 0;
}