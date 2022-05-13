// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int code;
//     float salary;
//     char name[10];
// };

// int main(){
//     struct empolyee suraj = {100, 34.32, "Suraj"};
//     printf("code is %d:\n", suraj.code);
//     printf("salary is %f:\n", suraj.salary);
//     printf("name is %s:\n", suraj.name);
//     return 0;
// }

#include<stdio.h>
#include<string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee suraj = {100, 34.23, "Suraj"};

    printf("Code is: %d \n", suraj.code);
    printf("Salary is: %f \n", suraj.salary);
    printf("Name is: %s \n", suraj.name);
 

    return 0;
}