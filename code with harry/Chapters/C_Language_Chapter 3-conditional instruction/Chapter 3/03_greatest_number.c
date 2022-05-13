#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;

    printf("Enter num1 here\n");
    scanf("%d", &num1);

    printf("Enter num2 here\n");
    scanf("%d", &num2);

    printf("Enter num3 here\n");
    scanf("%d", &num3);

    printf("Enter num4 here\n");
    scanf("%d", &num4);

    if ((num1 > num2) && (num1 > num3) && (num1 > num4))
    {
        printf("Your greatest number is num1 and it is %d\n", num1);
    }
    else if ((num2 > num1) && (num2 > num3) && (num2 > num4))
    {
        printf("Your greatest number is num2 and it is %d\n", num2);
    }
    else if ((num3 > num1) && (num3 > num2) && (num3 > num4))
    {
        printf("Your greatest number is num3 and it is %d\n", num3);
    }
    else if ((num4 > num1) && (num4 > num2) && (num4 > num3))
    {
        printf("Your greatest number is num4 and it is %d\n", num4);
    }
    return 0;
}



/* WRONG METHOD  --> The method given below only take 1st number as command and only execute it

#include <stdio.h>

int main(){
    int num1, num2, num3, num4;
    printf("Enter your number here\n");
    scanf("%d,%d,%d,%d", &num1, &num2, &num3, &num4);

    if((num1 > num2) && (num1 > num3) && (num1 > num4)){
        printf("Your greatest number is num1 and the number is %d", num1);
    }
    else if((num2 > num1) && (num2 > num2) && (num2 > num4)){
        printf("Your greatest number is num1 and the number is %d", num1);
    }
    else if((num3 > num1) && (num3 > num2) && (num3 > num4)){
        printf("Your greatest number is num1 and the number is %d", num1);
    }
    else if((num4 > num1) && (num4 > num2) && (num4 > num3)){
        printf("Your greatest number is num1 and the number is %d", num1);
    }
    return 0;
} 

*/