#include <stdio.h>
#define SUM(a, b) a + b
#define PRODUCT(a, b) a *b
// #define PRODUCT(a, b) (a) * (b) --> If we use this then the result is -10

int main()
{
    printf("Sum of 3 and 4 is %d\n", SUM(3, 4));
    printf("Product of 3 and 4 is %d\n", PRODUCT(3 + 2, 4 - 6));
// a = 3 +2 and b = 4-6
// a * b = 3 + 2 * 4 - 6 --> followed by multipliacation
//       = 3 + 8 - 6
//       = 11 - 6
//       = 5
#undef SUM
    // printf("Sum of 3 and 4 is %d\n", SUM(3, 4)); // --> Here SUM will not run as we undefined SUM
    printf("Product of 3 and 4 is %d\n", PRODUCT(3 + 2, 4 - 6));

    return 0;
}