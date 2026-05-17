#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, opt;

    srand(time(0));

    while(1)
    {
        printf("\n=== Number Guessing Game ===\n");
        printf("1. Start the Game\n");
        printf("2. Exit\n");

        printf("Enter your option: ");
        scanf("%d", &opt);

        switch(opt)
        {
            case 1:

                // Generate new random number
                number = rand() % 100 + 1;

                printf("\nGuess a number between 1 and 100\n");

                guess = 0;

                while(guess != number)
                {
                    printf("Enter your guess: ");
                    scanf("%d", &guess);

                    if(guess > number)
                    {
                        printf("Too high!\n");
                    }
                    else if(guess < number)
                    {
                        printf("Too low!\n");
                    }
                    else
                    {
                        printf("Correct!!! You guessed the number!\n");
                    }
                }

                break;

            case 2:
                printf("Exiting the game...\n");
                return 0;

            default:
                printf("Invalid option!\n");
        }
    }

    return 0;
}

