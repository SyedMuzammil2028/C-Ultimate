#include <stdio.h>

int main()
{
    int x, y, z;
    printf(" Enter mark of  course 1 = ");
    scanf("%d", &x);
    printf(" Enter mark of  course 2 = ");
    scanf("%d", &y);
    printf(" Enter mark of  course 3 = ");
    scanf("%d", &z);
    if (x < 101 && y < 101 && z < 101)
    {
        if (x < 33 || y < 33 || z < 33)
            printf(" You are fail due to individual course(s)\n");
        else if ((x + y + z) / 3 < 40)
            printf("you are fail due to less percentage\n");
        else
            printf(" You are passed ");
    }
    else
        printf(" Invalid marks");
    return 0;
}