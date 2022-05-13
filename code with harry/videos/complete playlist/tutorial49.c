#include <stdio.h>
// #include "temp_49.c"


// int my_var;
int my_func(int a, int b){
    // auto int my_var;
    // extern int my_var;
    static int my_var;
    my_var++;
    printf("The my_var is %d\n", my_var);
    // int my_var; // --> Both line 12 and 7 are same
    // my_var = a+b;
    return my_var;
}
// int my_var = 343;

int main(){
    // Declaration - Telling the compiler about the variable (No space reserved)
    // Definition - Declaration + space reservation

    register int my_var = my_func(3,5);
    my_var = my_func(3,5);
    my_var = my_func(3,5);
    my_var = my_func(3,5);
    // printf("The my_var is %d\n", my_var);
    return 0;
}