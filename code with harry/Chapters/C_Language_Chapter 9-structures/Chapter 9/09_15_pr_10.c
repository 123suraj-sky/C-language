#include <stdio.h>
typedef struct time
{
    int date;
    int month;
    int year;
    int hour;
    int minute;
    int second;
} time;

void display(time t)
{
    printf("The time is %d/%d/%d - %d:%d:%d\n", t.date, t.month, t.year, t.hour, t.month, t.second);
}

int dateCompare(time t1, time t2)
{
    // Make decision on the basis of year comparison
    if (t1.year > t2.year)
    {
        return 1;
    }
    if (t1.year < t2.year)
    {
        return -1;
    }

    // Make decision on the basis of month comparison
    if (t1.month > t2.month)
    {
        return 1;
    }
    if (t1.month < t2.month)
    {
        return -1;
    }

    // Make decision on the basis of date comparison
    if (t1.date > t2.date)
    {
        return 1;
    }
    if (t1.date < t2.date)
    {
        return -1;
    }

    // Make decision on the basis of hour comparison
    if (t1.date > t2.date)
    {
        return 1;
    }
    if (t1.date < t2.date)
    {
        return -1;
    }

    // Make decision on the basis of minute comparison
    if (t1.date > t2.date)
    {
        return 1;
    }
    if (t1.date < t2.date)
    {
        return -1;
    }

    // Make decision on the basis of second comparison
    if (t1.date > t2.date)
    {
        return 1;
    }
    if (t1.date < t2.date)
    {
        return -1;
    }

    else
    {
        return 0;
    }
}

int main()
{
    time t1 = {6, 3, 2031, 10, 55, 56}; // time, month, year, hour, minute, second
    time t2 = {3, 6, 2022, 20, 11, 10};
    display(t1);
    display(t2);

    int a = dateCompare(t1, t2);
    if (a == 1)
    {
        printf("Time %d/%d/%d - %d:%d:%d is greater than or more than time %d/%d/%d - %d:%d:%d\n", t1.date, t1.month, t1.year, t1.hour, t1.minute, t1.second, t2.date, t2.month, t2.year, t2.hour, t2.minute, t2.second);
    }
    else if (a == 0)
    {
        printf("Time %d/%d/%d - %d:%d:%d is equal to date %d/%d/%d - %d:%d:%d\n", t1.date, t1.month, t1.year, t1.hour, t1.minute, t1.second, t2.date, t2.month, t2.year, t2.hour, t2.minute, t2.second);
    }
    else if (a == -1)
    {
        printf("Time %d/%d/%d - %d:%d:%d is greater than or more than date %d/%d/%d - %d:%d:%d\n", t1.date, t1.month, t1.year, t1.hour, t1.minute, t1.second, t2.date, t2.month, t2.year, t2.hour, t2.minute, t2.second);
    }
    return 0;
}