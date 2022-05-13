#include <stdio.h>
void goodMorning();
void goodAfternoon();
void goodNight();

int main()
{
    goodMorning();
    return 0;
}

void goodMorning()
{
    printf("Good Morning Suraj\n");
    goodAfternoon();
}

void goodAfternoon()
{
    printf("Good Afternoon Suraj\n");
    goodNight();
}

void goodNight()
{
    printf("Good Night Suraj\n");
}