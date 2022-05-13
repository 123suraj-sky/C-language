#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int snakeWaterGun(char you, char comp)
{
    // returns 1 if you win
    // returns -1 if you loss
    // returns 0 if match is draw

    // draw condition
    // cases covered:
    // ss
    // ww
    // gg
    if (you == comp)
    {
        return 0;
    }

    // non - draw conditions
    // cases covered:
    // sw
    // ws
    // sg
    // gs
    // wg
    // gw
    if (you == 's' && comp == 'w')
    {
        return 1;
    }
    else if (you == 'w' && comp == 's')
    {
        return -1;
    }

    if (you == 's' && comp == 'g')
    {
        return -1;
    }
    else if (you == 'g' && comp == 's')
    {
        return 1;
    }

    if (you == 'w' && comp == 'g')
    {
        return 1;
    }
    else if (you == 'g' && comp == 'w')
    {
        return -1;
    }
}

int main()
{
    char you, comp;
    srand(time(0));
    int number = rand() % 100 + 1;

    if (number < 33) // 1/3rd probability from 1 to 100 from 's', 'w', 'g'
    { 
        comp = 's';
    }
    else if (number > 33 && number < 66)
    {
        comp = 'w';
    }
    else
    {
        comp = 'g';
    }
    printf("Enter 's' for snake, 'w' for water, 'g' for gun\n");
    scanf("%c", &you);
    printf("You choose %c and computer choose %c\n", you, comp);
    int result = snakeWaterGun(you, comp);
    if (result == 0)
    {
        printf("Game Draw!!\n");
    }
    else if (result == 1)
    {
        printf("You Win!!\n");
    }
    else if (result == -1)
    {
        printf("You Loss!!\n");
    }
    return 0;
}