#include <stdio.h>
void starPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < (i + 1); j++) // Here we can also use j <= i in place of j < (i + 1)
        {
            printf("*");
        }
        printf("\n");
    }
}

void reverseStarPattern(int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j <= rows - i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int rows, a; // 'a' to select which pattern is to be printed and 'rows' for how many rows of that pattern is to be printed
start: //start the program from here if any error throws out(invalid input enter by the user)
    printf("Enter\n\
'0' to print triangular star pattern\n\
'1' to print reverse triangular star pattern\n");
    scanf("%d", &a);

    if (a == 0)
    {
        printf("How many rows you want to print\n");
        scanf("%d", &rows);
        if (rows <= 0)
        {
            printf("Error!! Negative rows are not allowed\n\n\n");
            goto start;
        }
        else
        {
            starPattern(rows);
        }
    }
    else if (a == 1)
    {
        printf("How many rows you want to print\n");
        scanf("%d", &rows);
        if (rows <= 0)
        {
            printf("Error!! Negative rows are not allowed\n\n\n");
            goto start;
        }
        else
        {
            reverseStarPattern(rows);
        }
    }
    else
    {
        printf("Error!!\n\n\n");
        goto start;
    }
    return 0;
}

// *
// **
// ***
// ****
// ***** --> Triangular star pattern

// *****
// ****
// ***
// **
// *  --> Reverse Triangular star pattern