#include <stdio.h>  // preprocessor command
#include <stdlib.h> // preprocessor command

int main()
{
    char s[44];
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("Hello World!\n");
    printf("%d\n", 32); // %d is known placeholder
    printf("32\n");
    printf("The number is %d\n", 32);
    printf("%d %d %d\n", 32, 58, 5);
    printf("%f\n", 32.4);           // for floating number
    printf("%lf\n", 356462.4);      // for large floating number --> double
    printf("%ld\n", 23687564);      // for large integer value
    printf("%c\n", 'a');            // for chracters
    printf("%s\n", "Hello world!"); // string
    printf("%x\n", 16);             // hexadecimal number
                                    // 16 in hexadecimal number is 10
    printf("Enter a string: ");
    scanf("%s", &s);
    printf("%s\n", s);
    puts("this is my c program");
    return 0;
}