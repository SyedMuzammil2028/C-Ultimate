#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // Initialize random number generator
    srand(time(0));

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 100) + 1;
    int no_of_guesses = 0;
    int guessed_number;

    do
    {
        printf("Enter number = ");
        scanf("%d", &guessed_number);
        if (guessed_number > randomNumber)
            printf("Enter smaller number \n");
        else if (guessed_number < randomNumber)
            printf("Enter bigger number \n");
        else
        {
            printf("Congress you guessed it\n");
        }
        no_of_guesses++;
    } while (guessed_number != randomNumber);

    printf("You guessed the number %d in %d gusses", randomNumber, no_of_guesses);
}