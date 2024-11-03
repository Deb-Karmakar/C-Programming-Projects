#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int score = 0;
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
        int num1 = rand() % maxnumber + 1;
        int num2 = rand() % maxnumber + 1;
        srand(time(0));
        int answer = 0, userAnswer, option;
        option = rand() % 3 + 1;
        if (difficulty == 1)
        {
            switch (option)
            {
            case 1:
                printf("What is %d + %d? ", num1, num2);
                answer = num1 + num2;
                break;
            case 2:
                printf("What is %d - %d? ", num1, num2);
                answer = num1 - num2;
                break;
            case 3:
                printf("What is %d * %d? ", num1, num2);
                answer = num1 * num2;
                break;
            }
        }
        else if (difficulty == 2)
        {
            switch (option)
            {
            case 1:
                printf("What is %d + %d? ", num1, num2);
                answer = num1 + num2;
                break;
            case 2:
                printf("What is %d - %d? ", num1, num2);
                answer = num1 - num2;
                break;
            case 3:
                printf("What is %d * %d? ", num1, num2);
                answer = num1 * num2;
                break;
            }
        }
        else
        {
            switch (option)
            {
            case 1:
                printf("What is %d + %d? ", num1, num2);
                answer = num1 + num2;
                break;
            case 2:
                printf("What is %d - %d? ", num1, num2);
                answer = num1 - num2;
                break;
            case 3:
                printf("What is %d * %d? ", num1, num2);
                answer = num1 * num2;
                break;
            }
        }
        scanf("%d", &userAnswer);
        if (answer == userAnswer)
        {
            printf("Correct Answer!\n");
            score = score + 5;
        }
        else
        {
            printf("Wrong Answer!\n");
        }
        printf("Your score is %d\n", score);
        printf("\n");
        printf("Do you want to play this quiz again (y/n)? : ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    printf("Thank you for playing Maths Quiz!\nYour final score is %d\n", score);
    return 0;
}