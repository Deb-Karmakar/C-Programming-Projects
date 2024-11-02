#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    char choice;
    do
    {
        int difficulty;
        printf("Choose your Difficulty level (1: Easy, 2: Moderate, 3: Hard) : ");
        scanf("%d", &difficulty);
        int maxnumber;
        if (difficulty == 1)
        {
            maxnumber = 100;
        }
        else if (difficulty == 2)
        {
            maxnumber = 200;
        }
        else
        {
            maxnumber = 300;
        }
        int number;

        srand(time(0));
        number = rand() % maxnumber + 1;
        int guess, no_of_guesses = 1;
        do
        {
            if (difficulty == 1)
            {
                printf("Guess the number between 1 to 100 : ");
            }
            else if (difficulty == 2)
            {
                printf("Guess the number between 1 to 200 : ");
            }
            else
            {
                printf("Guess the number between 1 to 300 : ");
            }
            scanf("%d", &guess);
            if (guess > number)
            {
                printf("Lower Number Please!\n");
            }
            else if (guess < number)
            {
                printf("Higher Number Please!\n");
            }
            else
            {
                printf("You Guessed the Correct Number!\n");
                printf("You Guessed it in %d attempts\n", no_of_guesses);
            }
            no_of_guesses++;
        } while (guess != number);
        printf("\n");
        printf("Do you want to play this game again (y/n)? : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for playing!\n");
    return 0;
}
