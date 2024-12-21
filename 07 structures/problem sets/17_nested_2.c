#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_EMPLOYEES 10

// Define the Employee structure
struct Employee {
    char employee_id[10];
    char name[50];
    char role[20];
    float salary;
    char dept[20];
    char join_date[15];
};

// Function to add a new employee
int addEmployee(struct Employee employees[], int employeeCount) {
    if (employeeCount >= MAX_EMPLOYEES) {
        printf("Cannot add more employees. Maximum limit reached.\n");
        return employeeCount;
    }

    printf("Enter employee ID: ");
    scanf(" %[^\n]", employees[employeeCount].employee_id);

    printf("Enter employee name: ");
    scanf(" %[^\n]", employees[employeeCount].name);

    printf("Enter employee role: ");
    scanf(" %[^\n]", employees[employeeCount].role);

    printf("Enter employee salary: ");
    scanf("%f", &employees[employeeCount].salary);

    printf("Enter employee department: ");
    scanf(" %[^\n]", employees[employeeCount].dept);

    printf("Enter employee joining date (DD/MM/YYYY): ");
    scanf(" %[^\n]", employees[employeeCount].join_date);

    printf("Employee added successfully!\n");
    return employeeCount + 1;
}

// Function to display all employees
void displayEmployees(struct Employee employees[], int employeeCount) {
    if (employeeCount == 0) {
        printf("No employees available.\n");
        return;
    }

    printf("\n%-10s %-20s %-20s %-10s %-15s %-15s\n", "ID", "Name", "Role", "Salary", "Department", "Join Date");
    printf("-------------------------------------------------------------------------------\n");
    for (int i = 0; i < employeeCount; i++) {
        printf("%-10s %-20s %-20s %-10.2f %-15s %-15s\n", employees[i].employee_id, employees[i].name, employees[i].role,
               employees[i].salary, employees[i].dept, employees[i].join_date);
    }
}

// Function to search for an employee by ID
void searchEmployee(struct Employee employees[], int employeeCount) {
    if (employeeCount == 0) {
        printf("No employees to search.\n");
        return;
    }

    char searchID[10];
    printf("Enter employee ID to search: ");
    scanf(" %[^\n]", searchID);

    for (int i = 0; i < employeeCount; i++) {
        if (strcmp(employees[i].employee_id, searchID) == 0) {
            printf("Employee Found:\n");
            printf("ID: %s\n", employees[i].employee_id);
            printf("Name: %s\n", employees[i].name);
            printf("Role: %s\n", employees[i].role);
            printf("Salary: %.2f\n", employees[i].salary);
            printf("Department: %s\n", employees[i].dept);
            printf("Join Date: %s\n", employees[i].join_date);
            return;
        }
    }

    printf("Employee with ID %s not found.\n", searchID);
}

// Function to update an employee's salary
void updateSalary(struct Employee employees[], int employeeCount) {
    if (employeeCount == 0) {
        printf("No employees to update.\n");
        return;
    }

    char searchID[10];
    printf("Enter employee ID to update salary: ");
    scanf(" %[^\n]", searchID);

    for (int i = 0; i < employeeCount; i++) {
        if (strcmp(employees[i].employee_id, searchID) == 0) {
            printf("Employee Found: %s\n", employees[i].name);
            printf("Current Salary: %.2f\n", employees[i].salary);
            printf("Enter new salary: ");
            scanf("%f", &employees[i].salary);
            printf("Salary updated successfully!\n");
            return;
        }
    }

    printf("Employee with ID %s not found.\n", searchID);
}

// Function to sort employees by joining date
void sortEmployeesByJoinDate(struct Employee employees[], int employeeCount) {
    struct Employee temp;
    for (int i = 0; i < employeeCount - 1; i++) {
        for (int j = 0; j < employeeCount - i - 1; j++) {
            if (strcmp(employees[j].join_date, employees[j + 1].join_date) > 0) {
                temp = employees[j];
                employees[j] = employees[j + 1];
                employees[j + 1] = temp;
            }
        }
    }
    printf("Employees sorted by joining date.\n");
}

// Main function to run the employee management system
int main() {
    struct Employee employees[MAX_EMPLOYEES];
    int employeeCount = 0;
    int choice;

    do {
        printf("\nEmployee Management System\n");
        printf("1. Add New Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search for an Employee by ID\n");
        printf("4. Update Employee Salary\n");
        printf("5. Sort Employees by Joining Date\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                employeeCount = addEmployee(employees, employeeCount);
                break;
            case 2:
                displayEmployees(employees, employeeCount);
                break;
            case 3:
                searchEmployee(employees, employeeCount);
                break;
            case 4:
                updateSalary(employees, employeeCount);
                break;
            case 5:
                sortEmployeesByJoinDate(employees, employeeCount);
                break;
            case 6:
                printf("Exiting the program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}