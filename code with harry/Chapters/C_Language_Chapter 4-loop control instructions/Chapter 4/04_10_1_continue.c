#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age\n", i);
        scanf("%d", &age);

        if (age > 10)
        {
            continue;
        }

        printf("Hii my name is Suraj Kumar Yadav\n");
        printf("Hii my name is Suraj Kumar Yadav\n");
        printf("Hii my name is Suraj Kumar Yadav\n");
        printf("Hii my name is Suraj Kumar Yadav\n");
        printf("Hii my name is Suraj Kumar Yadav\n");
    }
    return 0;
}