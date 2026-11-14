#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Generates a random number between 1 and 100
    int random_number = (rand() % 100) + 1;

    int i=1;
    int n;
    printf("Enter your guess: ");
    scanf("%d", &n);

    while (n != random_number)
{
    if (n < random_number)
    {
    printf("GUESS  HIGHER LOL.\n");
    printf("No. of guesses = %d\n", i);
    i++;
    printf("Enter your guess: \n");
    scanf("%d", &n);
    }

    else if(n > random_number)
    {
    printf("GUESS  LOWER LOL.\n");
    printf("No. of guesses = %d\n", i);
    i++;
    printf("Enter your guess: \n");
    scanf("%d", &n);
    }
}

    
        printf("Your guess is right.\n");
        printf("Total number of guesses = %d\n", i);
        
    

    

    return 0;
}