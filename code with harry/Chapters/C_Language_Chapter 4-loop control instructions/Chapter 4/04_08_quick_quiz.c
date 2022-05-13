//  Write a programme to print n natural number in reverse

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);

    // for(int i =n; i; i--){ --> This is also true, only difference is that it prints natural numbers in variable of i
    for(n; n; n--){
        printf("Your number is %d\n", n);
    }
    return 0;
}