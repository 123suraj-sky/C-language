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

    if (weekday == 0 || weekday == 6)
        printf("Enjoy Weekend\n");

    return 0;
}