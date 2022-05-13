#include <stdio.h>

int main()
{
    int a;
    int b = a; // if there is no int before b, then it is not valid
    int v = 3 ^ 3; // the operation is valid but it will not print 27 because it is bitwise xor opreator
    printf("%d\n", v);
    // char dt = '21 Dec 2020'; // is not valid because we can write only one character in char
    // 3.0 / 8 - 2 will return double because every decimal number will be treated as double
    
    float d = 3.0 / 8 - 2;
    printf("%f\n", d);
    
    // Q.3 Write a programme to determine whether a number is divisible by 97 or not
    int num;
    printf("Enter the number here %d \n");
    scanf("%d", &num);
    printf("Divisiblity test returns: %d\n", num%97); // if the remainder is 0,
    // then the number is divisible by 97

    //Q.4 Step by step evaluation of 3*x/y - z + k
    int x = 2, y = 3,z = 3, k = 1;
    int results =  3 * x / y - z + k;
    // 6 / 3 - 3 + 1
    // 2 - 3 + 1
    // -1 + 1
    // 0
    printf("The value of result is %d\n", results);

    //Q.5 
    // 3.0 is a floating point number
    return 0;
}