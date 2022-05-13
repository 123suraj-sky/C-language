#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int r;
    // The rando seeding function is called srand(x);
    // 'x' is any integer number which helps seeding the function
    // srand(66);
    // the output is still same so have to reseed the randomizer i.e. time function
    srand((unsigned) time(NULL));
    r = rand();
    printf("%d is a random number\n", r);
    return 0;
}