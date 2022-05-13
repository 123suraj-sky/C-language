#include <stdio.h>

int main()
{
    char a;
    puts("Vacation options:");
    puts("A - Airfare");
    puts("B - Hotel");
    puts("C - Rental Car");
    scanf("%c", &a);

    switch (a)
    {
    case 'A':
    case 'a':
        puts("You have selected the airfare");
        break;
    case 'B':
    case 'b':
        puts("You have selected the Hotel");
        break;
    case 'C':
    case 'c':
        puts("You have selected the Rental Car");
        break;
    default:
        puts("Please enter a valid input");
        break;
    }
    return 0;
}