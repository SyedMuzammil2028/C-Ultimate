#include <stdio.h>

int main()
{
    int x, y, a, b;
    printf(" \tIba Test Result Calculator\n\n");
    printf(" Enter correct no of mcqs in Maths portion = ");
    scanf("%d", &x);
    printf(" Enter correct no of mcqs in English portion =");
    scanf("%d", &y);
    printf("\n Following cutoffs to be obtain inorder to secure admission ");
    printf("\n Maths section cutoff = 108");
    printf("\n English section cutoff = 108");
    printf("\n Total cutoff = 232");
    a = x * 4;
    b = y * 4;
    printf("\n\n Marks in maths portion = %d\n", a);
    printf(" Marks in English portion = %d\n", b);
    printf(" Total marks = %d\n", a + b);

    if (a < 180 && b < 180)
    {
        if (a <= 108 || b <= 108)
        {
            if (a <= 108 && b <= 108)
                printf("\n You are fail due to Both portions cutoff\n");
            else if (a < 108)
                printf("\n You are fail due to Maths portion cutoff \n");
            else if (b < 108)
                printf("\n You are fail due to English portion cutoff\n");

            else if ((a + b) < 232)
            {
                printf("\n You are fail due to less marks than total cutoff \n");
            }
            printf("\n Better luck next time , thank you ");
        }
        else
            printf("\n Congratulation , You have secured BS CS at Iba \n");
    }
    else
        printf("\n Invalid marks ");
    return 0;
}