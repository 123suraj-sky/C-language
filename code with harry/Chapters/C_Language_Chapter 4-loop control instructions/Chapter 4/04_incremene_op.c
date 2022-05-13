#include <stdio.h>

int main()
{
    int i = 5;
    printf("The value after i++ is %d\n", i++); // i++ means the value is first printed then its value is increased
    printf("The value after ++i is %d\n", ++i); // ++i means the value is first increased then its value is printed
    printf("The value after i is %d\n", i);     // +++ does not exist

    i += 10; // --> This means value of is increased by 10
             // --> This increment i by 10
    printf("The value after i is %d\n", i);
    return 0;
}