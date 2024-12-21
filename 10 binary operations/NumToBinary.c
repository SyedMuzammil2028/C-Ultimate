#include <stdio.h>
int main()
{
    int num, reminder, i;
    printf("\nNumber To Binary Conversion");
    printf("\n----------------------------");
    printf("\nEnter number: ");
    scanf("%d", &num);
    int arr[32];
    for (i = 0; num > 0; i++)
    {
        reminder = num % 2;
        arr[i] = reminder;
        num = num / 2;
    }
    // printf("Size of array %d\n", i);
    printf("Binary number: ");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", arr[i]);
    }

    return 0;
}