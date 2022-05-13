#include <stdio.h>
#include <stdlib.h>
/* 
Dynamic Memory Allocation

ABC Pvt. Ltd. manages the employees records of other companies
Employee id can be of any length and it can contain any character
for 3 employees, you have to take 'length of employee id' as input in a length integer variable
Then you have to take employee is as an input and display it on screen
store the employee id in a character array which is allocated dynamically*/
int main()
{
    int chars, i = 0;
    char a,b;
    char *ptr;
    while (i < 3)
    {
        printf("Employee %d: Enter the number of characters in your Employee id\n", i + 1);
        scanf("%d", &chars);
        getchar(); // Here we use getchar() because when we enter anything
        // and then press enter the system take enter key as input for %c in next scanf

        // It only manage one character and adding space before %c will also manage one characters


        printf("Enter the value of a\n");
        scanf("%c", &a);
        getchar(); // Here we use getchar() because when we enter anything
        // and then press enter the system take enter key as input for %c in next scanf

        // It only manage one character and adding space before %c will also manage one character


        printf("Enter the value of b\n");
        scanf("%c", &b);
        ptr = (char *)malloc((chars + 1) * sizeof(char));
        printf("Enter your Employee id\n");
        scanf("%s", ptr);
        printf("Your Employee Id is %s\n", ptr);
        free(ptr);

        i = i + 1;
    }

    return 0;
}