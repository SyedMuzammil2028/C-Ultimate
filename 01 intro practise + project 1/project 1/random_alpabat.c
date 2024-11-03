#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Section A to L
int main()
{

    srand(time(0));
    char random;
    char guessed_number;
    int  no_of_guesses;

    // Generate random number between 1 and 100
    int randomNumber = (rand() % 26);
    random = randomNumber + 'A';
    printf("Random Alphabat: %c\n", random);
}