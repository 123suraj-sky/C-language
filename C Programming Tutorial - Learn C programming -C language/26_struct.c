#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[20];
    float percentage;
} record1;

int main()
{
    record1.id = 1;
    strcpy(record1.name, "Batman");
    record1.percentage = 93.5;

    printf("id = %d\nName = %s\nPercentage = %f\n", record1.id, record1.name, record1.percentage);

    struct student record12;
    record12.id = 2;
    strcpy(record12.name, "Jarivs");
    record12.percentage = 98.5;
    printf("id = %d\nName = %s\nPercentage = %f\n", record12.id, record12.name, record12.percentage);
    return 0;
}