#include <stdio.h>
#include <string.h>

struct student
{
    char name[20];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct student student1;
    student1.age = 20;
    student1.gpa = 3.2;
    strcpy(student1.name, "Suraj");
    strcpy(student1.major, "Business");

    struct student student2;
    student2.age = 10;
    student2.gpa = 2.2;
    strcpy(student2.name, "pam");
    strcpy(student2.major, "art");

    printf("%s\n", student1.name);
    printf("%f\n", student1.gpa);

    printf("%s\n", student2.name);
    printf("%f\n", student2.gpa);
    return 0;
}