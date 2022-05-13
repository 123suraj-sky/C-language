#include <stdio.h>

int main()
{
    printf("sizeof(int) = %d\n", sizeof(int));
    printf("sizeof(long int) = %d\n", sizeof(long int));
    printf("sizeof(short int) = %d\n", sizeof(short int));

    printf("\nsizeof(char) = %d\n", sizeof(char));

    printf("\nsizeof(float) = %d\n", sizeof(float));
    printf("sizeof(double) = %d\n", sizeof(double));
    printf("sizeof(long double) = %d\n", sizeof(long double));

    return 0;
}