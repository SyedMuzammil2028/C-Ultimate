#include<stdio.h>

int main()
{
    int year;
    printf(" Enter year to cheak wether it is leap year = ");
    scanf("%d", &year);
    if ((year % 4 == 0 && year % 100!= 0 )|| year % 400 == 0)
        printf("\n Year %d is a leap year",year);
    else
        printf("\n Year %d is not a leap year",year);
    
}