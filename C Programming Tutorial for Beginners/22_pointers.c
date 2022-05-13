#include <stdio.h>

int main()
{
    int age = 30;
    int *pAge = &age; // *pAge is pointer for age
    double gpa = 3.4;
    double *pGpa = &gpa; // *pGpa is pointer for gpa
    char grade = 'A';
    char *pGrade = &grade; // *pGrade is pointer for grade

    printf("age's memory address: %p\n", &age);
    return 0;
}