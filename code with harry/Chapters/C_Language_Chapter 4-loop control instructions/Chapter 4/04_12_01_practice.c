#include <stdio.h>

int main(){
    int i = 1, n, factorial = 1;
    
    printf("Enter the value of n:\n");
    scanf("%d", &n);

    for(i; i <= n; i++){
        factorial *= i;
    }

    printf("The value of factorial %d is %d\n", n, factorial);
    return 0;
}