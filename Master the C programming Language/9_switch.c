#include <stdio.h>

int main()
{
    int weekday;
    printf("Enter weekday\
\n0 - sunday\
\n1 - monday\
\n2 - tuesday\
\n3 - wednesday\
\n4 - thursday\
\n5 - friday\
\n6 - saturday\n");
    scanf("%d", &weekday);

    switch (weekday)
    {
    case 1:
        printf("Sunday\n");
        break;
    case 2:
        printf("Monday\n");
        break;
    case 3:
        printf("Tuesday\n");
        break;
    default:
        printf("Invalid weekday\n");
        break;
    }

    return 0;
}