#include <stdio.h>

int main()
{
    int obt, total, per; // obt for obtained marks and per for percentage and total for total marks

    printf("Enter obtained marks: ");
    scanf("%d", &obt);
    printf("Enter total marks: ");
    scanf("%d", &total);

    per = obt * 100 / total;
    printf("Percentage is %d\n", per);
    return 0;
}