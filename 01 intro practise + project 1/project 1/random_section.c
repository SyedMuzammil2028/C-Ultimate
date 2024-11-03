#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// Section A to L
int main()
{

    srand(time(0));
    char random;
    // Generate random number between 1 and 100
    int randomNumber = (rand() % 12);
    random = randomNumber + 'A';
    printf("Random alphabat: %c\n", random);
}
