#include <stdio.h>
#include <math.h>
// Define a structure to represent a point in 2D space with x and y coordinates. Implement
// functions to calculate the distance between two points and to check if a point lies within
// a specific rectangular boundary.
struct Point{
    int x;
    int y;
};

// Function to calculate the distance between two points
float distance(struct Point p1, struct Point p2){
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

int verifyBoundary(struct Point p, struct Point topleft, struct Point bottomright){
    if (p.x >= topleft.x && p.y <= topleft.y && p.x <= bottomright.x && p.y >= bottomright.y){
        return 1;
    }
    return 0;
}

void midpoint(struct Point p1, struct Point p2, struct Point *mid){
    mid->x = (p1.x + p2.x) / 2;
    mid->y = (p1.y + p2.y) / 2;
}

int main(){
    struct Point p1, p2;

    struct Point topleft = {0, 5};
    struct Point bottomright = {5, 0};

    struct Point midpoin;

    printf("Enter the x and y coordinates of the first point: ");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the x and y coordinates of the second point: ");
    scanf("%d %d", &p2.x, &p2.y);

    float dist = distance(p1, p2);

    printf("The distance between the two points is: %f\n", dist);
    if (verifyBoundary(p1, topleft, bottomright)){
        printf("Point 1 is within boundary.\n");
    }
    else{
        printf("Point 1 is not within boundary.\n");
    }

    if (verifyBoundary(p2, topleft, bottomright)){
        printf("Point 2 is within boundary.\n");
    }
    else{
        printf("Point 2 is not within boundary.\n");
    }

    midpoint(p1, p2, &midpoin);
    printf("The midpoint of the two points is: (%d, %d)\n", midpoin.x, midpoin.y);
    return 0;
}
