#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp; // make 'emp' a custom data type
        // We can use 'emp' in place of writing 'struct employee'
void show(emp emp1)
{
    printf("Code of the employee is: %d\n", emp1.code);
    printf("Salary of the employee is: %f\n", emp1.salary);
    printf("Name of the employee is: %s\n", emp1.name);
}

int main()
{
    // Declaring e1 and ptr
    emp e1;
    emp *ptr;

    // pointing ptr to e1
    ptr = &e1;

    // Set the member values for e1
    ptr->code = 101;
    ptr->salary = 10.41;
    strcpy(ptr->name, "Suraj");

    show(e1);

    return 0;
}