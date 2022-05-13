#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("This is a game of guessing a number\nSystem generates a number and you have guess it\n\n");
    // printf("The number is %d\n", number);

    do
    {
        printf("Guess the number between 1 to 100\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number); // This will loop will continue till the number is not guessed
    return 0;
}