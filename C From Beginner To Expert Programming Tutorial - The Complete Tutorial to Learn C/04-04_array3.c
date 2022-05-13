#include <stdio.h>
#define MEALS 3

int main()
{
    int calories[MEALS];
    int total = 0;
    puts("Calorie Counter");
    for (int i = 0; i < MEALS; i++)
    {
        printf("Calories at meal %d: ", i + 1);
        scanf("%d", &calories[i]);
        total += calories[i];
    }
    printf("You had a total of %d calories\n", total);

    return 0;
}