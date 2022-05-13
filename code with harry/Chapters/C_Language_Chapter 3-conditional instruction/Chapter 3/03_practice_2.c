#include <stdio.h>

int main()
{
    int physics, chemistry, maths;
    float total;

    printf("Enter your physics marks here\n");
    scanf("%d", &physics);

    printf("Enter your chemistry marks here\n");
    scanf("%d", &chemistry);

    printf("Enter your maths marks here\n");
    scanf("%d", &maths);

    total = (physics + chemistry + maths) / 3;

    if ((total < 40) || physics < 33 || chemistry < 33 || maths < 33)
    {
        printf("Your total percentage is %f and you are fail\n", total);
        // printf("Your total percentage is %d and you are fail\n", (int) total);
        // Above statement can also be used as command
    }

    else
    {
        printf("Your total percentage is %f and you are pass\n", total);
    }
    return 0;
}