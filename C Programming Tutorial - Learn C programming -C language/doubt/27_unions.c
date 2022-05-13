#include <stdio.h>
#include <string.h>

// Questions:-
// 1) what is %i in line 27 and 26
// 2) how to print uni.myInt

struct student
{
    int id;
    char name[20];
    float percentage;
} record1;

union myUnion
{
    int myInt;
    char myChar;
} uni;

int main()
{
    uni.myInt = 4;
    uni.myChar = 9;

    // printf("%i\n", uni.myInt);
    // printf("%i\n", uni.myChar);

    printf("The size of struct %d\n", sizeof(record1));
    printf("The size of union %d\n", sizeof(uni));
    return 0;
}