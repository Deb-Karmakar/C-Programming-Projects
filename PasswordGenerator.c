#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void password(int length)
{
    char characters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                        "abcdefghijklmnopqrstuvwxyz"
                        "0123456789"
                        "!@#$%^&*()"; // total 72 characters excluding null character
    srand(time(0));                   // seeds the random number using the current time
    printf("Generated Password : ");
    for (int i = 0; i < length; i++)
    {
        int index = rand() % (sizeof(characters) - 1); // Subtracting 1 gives us the actual number of characters in the characters array, excluding the null terminator.
        printf("%c", characters[index]);
    }
}
int main()
{
    int length;
    printf("Enter the length of the password : ");
    scanf("%d", &length);
    password(length);
    return 0;
}
