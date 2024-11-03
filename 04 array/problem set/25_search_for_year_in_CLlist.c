#include <stdio.h>
void searchIndex();

int main(){
    searchIndex();
    return 0;
}

void searchIndex(){
    int i, year, sessionNo;
    int present_flag = 0;
    int totalYears=20;

    int arr[]={2000,2002,2004,2005,2007,2009,2010,2011,2014,
    2016,2018,2021,2022,2024,2025,2027,2028,2030,2032,2033};
    
    printf("\nEnter year to check its presence in NIST confernce year list: ");
    scanf("%d", &year);

    for (i = 0; i < totalYears; i++){
        if (arr[i] == year){
            present_flag = 1;
            sessionNo=i+1;
            break;
        }
    }

    if (present_flag == 1){
        printf("\n Year %d is in the NIST Conference list.", year);
        printf("\n Session No. of %d year is S%d.", year, sessionNo);

    }
    else{
        printf("\n Year %d is not in the NIST Conference list.\n", year);
    }
}