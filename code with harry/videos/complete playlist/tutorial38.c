#include <stdio.h>
typedef struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
} std;

int main()
{
    // int* a, b;
    typedef int *intPointer;
    intPointer a, b;
    int c = 89;
    a = &c;
    b = &c;

    // struct student s1, s2;
    // std s1, s2;
    // s1.id = 56;
    // s2.id = 89;
    // printf("Value of s1's id is %d\n", s1.id);
    // printf("Value of s2's id is %d\n", s2.id);
    // // typedef <previous_name> <alias_name>;
    // // typedef unsigned long ul;
    return 0;
}