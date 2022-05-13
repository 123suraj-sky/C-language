//notes: Pointer to constant --> Value can't be modified using pointers
//* Although it need not to be constant from its declaration but from pointer prespective its value can't be modified

//notes: Constant pointer --> Once you delcare the pointer you can't replace it with another variable

#include <stdio.h>

int main()
{
    // Part 1
    // int a = 10, b = 20;
    // int *p = &a;
    // printf("%d\n", *p);
    // p = &b;
    // printf("%d\n", *p);

    // Part 2
    // int a = 10, b = 20;
    // int *const p = &a;
    // printf("%d\n", *p);
    // // p = &b; // invalid as pointer now becomes const i.e. "Constant Pointer"
    // printf("%d\n", *p);

    // Part 3
    // int a = 10, b = 20;
    // const int *p = &a; // Pointer to constant i.e. p is pointing to constant integer although declaration of a is not const
    // printf("%d\n", *p);
    // p = &b;
    // printf("%d\n", *p);
    // // *p = *p + 1; // Invalid as its content can't be modified
    // *p++; // How it is not showing any error and why its result is equal to a
    // printf("%d\n", *p);
    
    return 0;
}