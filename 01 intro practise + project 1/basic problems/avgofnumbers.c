#include <stdio.h>
int main()
{
    int i, subjects, marks, totalmarks = 0;
    printf("Enter total subjects: ");
    scanf("%d", &subjects);
    printf("Enter marks of %d subjects:\n", subjects);
    scanf("%d",marks);
    for (i = 1; i <= subjects; i++)
    {
        printf("%d)", i);
        scanf("%d", &marks);
        totalmarks += marks;
    }

    int avgmarks = totalmarks / subjects;
    printf("Average marks of %d subjects is: %d\n", subjects, avgmarks);
    return 0;
}