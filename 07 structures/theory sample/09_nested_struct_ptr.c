#include <stdio.h>
#include <string.h>

// Define structures
struct Address {
    char city[50];
    char state[50];
};

struct Employee {
    int id;
    char name[50];
    struct Address address;   // Nested structure
    struct Address *addr_ptr; // Pointer to a nested structure
};

int main() {
    // Declare the main structure
    struct Employee emp;

    // Assign values to the nested structure
    emp.id = 101;
    strcpy(emp.name, "John Doe");
    strcpy(emp.address.city, "New York");
    strcpy(emp.address.state, "NY");

    // Point addr_ptr to the nested structure
    emp.addr_ptr = &emp.address;

    // Access and print values using both direct access and pointer
    printf("Employee Details:\n");
    printf("ID: %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("City (direct access): %s\n", emp.address.city);
    printf("State (direct access): %s\n", emp.address.state);
    printf("City (via pointer): %s\n", emp.addr_ptr->city);  // Access via pointer
    printf("State (via pointer): %s\n", emp.addr_ptr->state); // Access via pointer

    return 0;
}
