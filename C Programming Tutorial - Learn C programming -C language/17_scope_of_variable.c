#include <stdio.h>

int global_v = 23; // global variable
                   // intialized by '0' if not initialized by the user

void NumberPrint()
{
    // local variable
    // int x;
    printf("Global + 50 = %d\n", global_v + 50);

}

int main()
{
    // local variable
    int local_v = 10;
    int global_v = 34;
    printf("local = %d\n", local_v);
    printf("Global = %d\n", global_v);
    NumberPrint();
    return 0;
}