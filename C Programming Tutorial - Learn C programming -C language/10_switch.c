#include <stdio.h>

int main()
{
    int marks = 80;
    switch (marks)
    {
    case 90:
    case 95:
        printf("This is an excellent grade\n");
        break;
    case 80:
        printf("You have scored very good\n");
        break;
    case 60:
        printf("You have scored good\n");
        break;
    case 50:
        printf("You have ok marks\n");
        break;

    default:
        printf("Grade unavalaible\n");
        break;
    }
    return 0;
}