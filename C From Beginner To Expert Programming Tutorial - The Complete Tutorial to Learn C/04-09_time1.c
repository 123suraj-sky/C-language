#include <stdio.h>
#include <time.h>

// ctime function converts the time in the string and its placeholder is %s as it is string

int main()
{
    time_t now;
    time(&now);
    // printf("The current tiem is %ld\n", now);
    printf("The current tiem is %s\n", ctime(&now));
    return 0;
}

// The following program prints the number of seconds since January 1st, 1970
// or Unix Epoch time

// #include <stdio.h>
// #include <time.h>

// int main()
// {
//     printf("The current tiem is %ld\n", time(NULL));
//     return 0;
// }