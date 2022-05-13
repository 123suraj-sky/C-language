#include <stdio.h>

int main()
{
    int a = 10, b;

    //* Pre increment operator
    b = a++;
    printf("Pre Increment operator\na is %d\n", a);
    printf("b is %d\n", b);

    //* Post increment operaotr
    b = ++a;
    printf("Post Increment operator\na is %d\n", a);
    printf("b is %d\n", b);

    return 0;
}