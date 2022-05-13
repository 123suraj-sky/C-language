#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("Enter the value of side\n");
    scanf("%d", &side);

    printf("The area of the square is %.2f\n", pow(side, 2));
    // Here we use %f because pow returns double
    // We use %.2f which prints till 2 digit after decimal
    // Or we can use %.3f which prints till 3 digit after decimal
    // Or we can use %.4f which prints till 4 digit after decimal
    // And so on ...
    return 0;
}