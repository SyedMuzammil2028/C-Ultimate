#include <stdio.h>
struct Chocolate{
    char Name[50];
    float Weight;
    int Calories;
    float Price;
    char ExpiryDate[20];
};

int main(){
    struct Chocolate myFavChocolates[3];

    for (int i = 0; i < 3; i++){
        printf("Enter chocolate name: ");
        scanf("%s", myFavChocolates[i].Name);
        printf("Enter chocolate weight: ");
        scanf("%f", &myFavChocolates[i].Weight);
        printf("Enter chocolate calories: ");
        scanf("%d", &myFavChocolates[i].Calories);
        printf("Enter chocolate price: ");
        scanf("%f", &myFavChocolates[i].Price);
        printf("Enter chocolate expiry date: ");
        scanf("%s", myFavChocolates[i].ExpiryDate);
    }
    for (int i = 0; i < 3; i++){
        printf("\nChocolate %d:\n", i + 1);
        printf("Name: %s\n", myFavChocolates[i].Name);
        printf("Weight: %.2f grams\n", myFavChocolates[i].Weight);
        printf("Calories: %d\n", myFavChocolates[i].Calories);
        printf("Price: $%.2f\n", myFavChocolates[i].Price);
        printf("Expiry Date: %s\n", myFavChocolates[i].ExpiryDate);
    }
    return 0;
}