#include <stdio.h>

int b = 34; // This is a global variable

int ret(){
    return 34*2;
}

int func1(int b1)
{
    // static int my_var = 0; // both line 6 and 7 give same output
    // static int my_var;        // both line 6 and 7 give same output
    static int my_var = 98; 
    // static int my_var = ret();  // not allowed --> error: initializer element is not constant
    printf("The value of my_var is %d\n", my_var);
    my_var++;
    // printf("The address of b inside func1 is %d\n", &b);
    // printf("The value of b inside func1 is %d\n", b);
    return b1 + my_var;
}

int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    int *ptr = &val;
    // printf("The value of func1 is %d\n", val);
    return 0;
}