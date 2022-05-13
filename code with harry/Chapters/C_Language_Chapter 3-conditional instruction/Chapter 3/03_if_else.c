#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age \n");
    scanf("%d", &age);

    if (age > 90)
    {
        printf("You are above 90, you cannot drive\n");
    }

    else
    {
        printf("You can drive\n");
    }

    // if (age = 50)
    // {
    //     printf("Congratulation! You completed your half century\n");
    // }    --> This will always give result of half-century if the number is non-zero
                // It is because  "=" is used for assignment a value to a given number and for equal to we use "=="
    
    if (age == 50)
    {
        printf("Congratulation! You completed your half century\n");
    }
    return 0;
}