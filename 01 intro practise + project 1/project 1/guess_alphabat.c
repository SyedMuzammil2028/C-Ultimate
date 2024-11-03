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
    //printf("Random Alphabat: %c\n", random);

    
    do
    {
        printf("Guess Alphabat = ");
        scanf("%c", &guessed_number);
        if(guessed_number>random){
            printf("Lower Alphabat please!\n");
        }
        else if(guessed_number<random){
            printf("Higher Alphabat please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        no_of_guesses++;

    } while (guessed_number != random);

    printf("You guessed the Alphabat in %d guesses", no_of_guesses);

    return 0;
}
