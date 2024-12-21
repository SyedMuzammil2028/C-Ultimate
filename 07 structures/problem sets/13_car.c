#include <stdio.h>
// Create a structure to store details about cars in a dealership, including make, model, 
// year, price, and mileage. Write a program that allows users to add new cars, display a 
// list of available cars, and search for cars by make or model.
#include <string.h>

#define MAX_CARS 50
typedef struct Cars{
    char make[20];
    char model[20];
    int year;
    float price;
    int mileage;
}cars;
int  addCar( cars car[], int count) {
    if (count >= MAX_CARS) {
        printf("Maximum number of cars reached");
        return count;
        } 
    printf("Enter car make, model, year, price, mileage: ");
    scanf("%19s %19s %d %f %d", car[count].make, car[count].model, &car[count].year, &car[count].price, &car[count].mileage);
    return count + 1;
}
void displayCars( cars car[], int count) {
    if (count == 0) {   
        printf("No cars available.");
        return;
        }
    for (int i = 0; i < count; i++) {
        printf("%s %s %d $%.2f %d\n", car[i].make, car[i].model, car[i].year, car[i].price, car[i].mileage);
}
}
void search( cars car [], int count, char searc[]) {
    int found=0;
    for (int i = 0; i < count; i++) {
        if (strcmp(car[i].make, searc) == 0 || strcmp(car[i].model,searc) == 0){
             printf("%s %s %d $%.2f %d\n", car[i].make, car[i].model, car[i].year, car[i].price, car[i].mileage);
             found =1;
        }}

    if (found == 0) {
        printf("No cars found.\n");
        }
}
int main()
{
    cars arr[MAX_CARS];
    int count=0;
    int choice;
    // char searc[20];

    do
    {
        printf("1. Add a new car\n");
        printf("2. Display all cars\n");
        printf("3. Search for a car by make or model\n");
        printf("4. Exit\n");
        scanf("%d", &choice );
        switch (choice)
        {
            case 1:
            count=addCar(arr, count);
            break;
            case 2:
            displayCars(arr, count);
            break;
            case 3:
            {char searc[20];
            printf("Enter make or model to search: ");
            scanf("%19s", searc);
            search(arr, count, searc);
            break;}
            case 4:
            printf("\nExiting the program.");
            break;
            default:
            printf("\nInvalid choice. Please choose a valid option.");
            }
    } while (choice!=4);
    
    return 0;
}