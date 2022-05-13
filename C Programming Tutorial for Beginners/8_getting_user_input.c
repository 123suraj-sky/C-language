#include <stdio.h>

int main()
{
    double gpa;
    printf("Enter your gpa: ");
    scanf("%lf", &gpa);
    printf("Your age is %f\n", gpa);

    char name[20];
    printf("Enter your name: \n");
    scanf("%s", name);
    printf("Your name is %s\n", name);
    getchar();

    char Name[20];
    printf("Enter your Name: \n");
    fgets(Name, 20, stdin);
    printf("Your Name is %s\n", Name);
    return 0;
}