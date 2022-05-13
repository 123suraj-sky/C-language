#include <stdio.h>

int main()
{
    float tax = 0, income;

    printf("Enter your income \n");
    scanf("%f", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + 0.05 * (income - 250000);  // --> Here we subtract 250000 because the person have not to give the tax on the remaining 250000 of his income
    }

    if (income >= 500000 && income <= 1000000)
    {
        tax = tax + 0.20 * (income - 500000);
    }

    if (income >= 1000000)
    {
        tax = tax + 0.30 * (income - 1000000);
    }

    printf("Your net income tax to be paid by last of this month is %f \n", tax);
    return 0;
}