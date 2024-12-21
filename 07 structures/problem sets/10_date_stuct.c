#include <stdio.h>

struct date{
    int dd;
    int mm;
    int yyyy;
};

int main()
{
    struct date d1,d2;

    printf("\nEnter the date (DD MM YYYY): ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yyyy);
    
    printf("date enterded is: %d/%d/%d\n",d1.dd,d1.mm,d1.yyyy);

    return 0;
}