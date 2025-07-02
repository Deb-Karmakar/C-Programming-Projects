#include <stdio.h>

int main()
{
char startChoice;
    printf("Do you want to use the calculator? (y/n): ");
    scanf(" %c", &startChoice);

    if (startChoice != 'y' && startChoice != 'Y') {
        printf("Calculator not started.\n");
        return 0;
    }

    char choice; // Variable to decide whether to continue or not
    do
    {
        printf("Enter two numbers along with the operator: ");

        float n, m;
        char ch;

        // Take input for first number
        scanf("%f", &n);

        // Take input for operator (with whitespace handling)
        scanf(" %c", &ch);

        // Take input for second number
        scanf("%f", &m);

        // Perform calculation based on the operator
        switch (ch)
        {
        case '+':
            printf("Result: %f\n", n + m);
            break;
        case '-':
            printf("Result: %f\n", n - m);
            break;
        case '*':
            printf("Result: %f\n", n * m);
            break;
        case '/':
            if (m != 0)
                printf("Result: %f\n", n / m);
            else
                printf("Error: Division by zero\n");
            break;
        default:
            printf("Invalid Operation\n");
            break;
        }

        // Ask if the user wants to continue
        printf("Do you want to perform another calculation? (y/n): ");
        scanf(" %c", &choice);

    } while (choice == 'y' || choice == 'Y'); // Continue if 'y' or 'Y' is entered

    printf("Calculator stopped.\n");
    return 0;
}
