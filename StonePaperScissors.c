#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int game(int you, int computer)
{
    // return 1 if you win, return -1 if you lose, return 0 if draw
    if (you == computer)
    {
        return 0;
    }
    else if (you == 'S' && computer == 'P')
    {
        return -1;
    }
    else if (you == 'S' && computer == 'X')
    {
        return 1;
    }
    else if (you == 'P' && computer == 'S')
    {
        return 1;
    }
    else if (you == 'P' && computer == 'X')
    {
        return -1;
    }
    else if (you == 'X' && computer == 'S')
    {
        return -1;
    }
    else if (you == 'X' && computer == 'P')
    {
        return 1;
    }
}
int main()
{
    int draw = 0, your_score = 0, computer_score = 0;
    char choice;
    do
    {
        int n;
        srand(time(0));       // this will generate differnt numbers
        n = rand() % 100 + 1; // this is due to keep the random values from 1 to 100
        char you, computer;
        if (n <= 33) // making the computer choose S, P or X based on the random values
            computer = 'S';
        else if (n > 33 && n <= 66)
            computer = 'P';
        else if (n > 66 && n <= 100)
            computer = 'X';
        printf("Choose S for Stone, P for Paper, X Scissor : ");
        scanf(" %c", &you);
        int result = game(you, computer);
        printf("You chose %c and computer chose %c\n", you, computer);
        if (result == 0)
        {
            printf("The Game is Draw!\n");
            draw++;
        }
        else if (result == 1)
        {
            printf("You Won!\n");
            your_score++;
        }
        else
        {
            printf("You Lose!\n");
            computer_score++;
        }
        printf("Do you want to play this game again (y/n)? : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thanks for playing! Final Scores - You: %d | Computer: %d | Draws: %d\n", your_score, computer_score, draw);
    return 0;
}