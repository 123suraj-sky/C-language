#include <stdio.h>
#include <string.h>
typedef struct bank{
    char name[20];
    double salary;
    int year; // year of opening account
} B;

int main(){
    B my_salary, my_year, my_name[20];
    my_salary.salary = 60000;
    my_year.year = 2001;
    strcpy(my_name->name, "Suraj"); 

    printf("Your Name is %s\n", my_name->name);
    printf("Your Year of opening account is %d\n", my_year.year);
    printf("Your Salary is %f\n", my_salary.salary);
    return 0;
}