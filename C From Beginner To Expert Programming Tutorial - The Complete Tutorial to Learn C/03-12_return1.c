#include <stdio.h>

char gimmeAna(void);

int main()
{
    // char grade;
    // grade = gimmeAna();
    printf("On this test your received an %c\n", gimmeAna());
    return 0;
}

char gimmeAna(void)
{
    return ('A');
}