#include <stdio.h>
#include <math.h>

int main()
{
    int a = 3;
    int b = 5;
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);

    int z = 8;
    z = b * a; // legal
    // b * a = z; // illegal
    printf("The value of z is %d\n", z);

    printf("5 when divided by 2 leaves remainder %d\n", 5 % 2);
    printf("-5 when divided by 2 leaves remainder %d\n", -5 % 2);
    printf("5 when divided by -2 leaves remainder %d\n", 5 % -2); // as sign of result is same as sign of numerator

    // No operator is assumed to be present
    // printf("product of 4 and 5 is %d", 4.5); --> Wrong! This gives no result
    // printf("product of 4 and 5 is %d", (4)(5));
    printf("product of 4 and 5 is %d\n", 4 * 5);

    // there is no operator of exponential
    // printf("The value of 4 to the power 5 is %d\n", 4^5); --> this will not give 4 to the power 5
    // because this a "Bitwise xor operator";
    printf("The value of 2 to the power 4 is %f\n", pow(2, 4)); // pow is funciton used to give power to numbers and is this case we have to add #include <math.h> and in case of %d we have to use %f because it double return.

    printf("The value of 6 + 4 is %d\n", 6 + 4);
    printf("The value of 6 + 4.3 is %f\n", 6 + 4.3);
    printf("The value of 6.8 + 4.9 is %f\n", 6.8 + 4.9);
    printf("The value of 5/2 is %d\n", 5 / 2);
    printf("The value of 5.0/2 is %f\n", 5.0 / 2);
    printf("The value of 3.0/9 is %f\n", 3.0 / 9);
    return 0;
}