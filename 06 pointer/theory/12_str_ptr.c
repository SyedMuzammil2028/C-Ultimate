#include <stdio.h> 
struct Point {
    int x;
    int y;
};

int main() {
    // Initialize a structure variable 
    struct Point p1 = {10, 20}; 

    // Pointer to the structure
    struct Point *ptr = &p1; 

    // Access and modify structure members using the pointer
    printf("Original Point: x = %d, y = %d\n", ptr->x,(*ptr).y);

    ptr->x = 30; // Modify x through pointer
    (*ptr).y = 40; // Modify y through pointer

    printf("Modified Point: x = %d, y = %d\n", ptr->x,(*ptr).y);

    return 0;
}