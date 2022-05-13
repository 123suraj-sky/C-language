#include <stdio.h>

int main(){

    printf("We have to calculate sum of the numbers occuring in the multiplication table of 8(consider 8*1 to 8*10)\n\n");

    int i = 8, n, k, sum = 0;
    printf("Enter the value of n:-\n");
    scanf("%d", &n);

    for(k = 1; k <= 10; k++)
    {
        sum += k;
    }

    printf("Required sum is %d\n", 8 * sum);
    
    return 0;
}