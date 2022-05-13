#include <stdio.h>

int main()
{
    int a = 10;
    if (a = 11)
    {
        printf("I am eleven");
    }
    else
    {
        printf("I am not eleven");
    }
    // --> In above example final output is I am eleven because here a=11 is used which is assignment operator not equal to operator. For equal to opreator we use ==
    // --> In above example it is not necessary to use curley brackets because we can write the programme of if and else without using curely brackets in case of SINGLE COMMAND OF PRINTING A NUMBER
    return 0;
}