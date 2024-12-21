#include <stdio.h>

struct date{
    int dd;
    int mm;
    int yyyy;
};

int main()
{
    struct date d1,d2 ={10, 12, 2000};

    printf("\nEnter the date (DD MM YYYY) : ");
    scanf("%d %d %d",&d1.dd,&d1.mm,&d1.yyyy);

    if ((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.dd == d2.yyyy)){
        printf("\nDate is same");
    }
    else{
        printf("\nDate is not same ");
    }

    printf("\ndate enterded is: %d/%d/%d\n",d1.dd,d1.mm,d1.yyyy);

    return 0;
}