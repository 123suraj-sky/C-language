#include <stdio.h>

int main()
{
    struct record
    {
        int account;
        float balance;
    };

    struct record my_bank;

    my_bank.account = 12234;
    my_bank.balance = 4353456.67;
    printf("In account %d I have %.2f\n", my_bank.account, my_bank.balance);

    return 0;
}