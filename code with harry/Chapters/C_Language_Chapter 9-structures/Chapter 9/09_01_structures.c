#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};

int main()
{
    int a = 34;
    char b = 'i';
    float c = 234.34534;
    // employee e1;
    // e1.salary = 342.345; --> Won't work without employee structure

    struct employee e1;
    e1.code = 100; // "." is member operator
    e1.salary = 234.34534;
    // e1.name = "Suraj"; --> Won't work
    strcpy(e1.name, "Suraj");

    printf("%d\n", e1.code);
    printf("%.3f\n", e1.salary);
    printf("%s\n", e1.name);
    return 0;
}