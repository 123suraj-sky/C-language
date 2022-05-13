// Quick quiz --> Write a programme to print first n natural number

#include <stdio.h>

int main(){
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    for( int a = 0; a < n; a++){
        printf("Your value is %d\n", a + 1);
    }

    int i;
    for(i = 5; i; i--){
        printf("The value of i is %d\n", i); // The code is executed until the value of i becomes 0 and it is true for any non-zero number
    }
    return 0;
}




// for(int a = 0; a<10; a++){
    //     printf("The value of a is %d \n", a+1);
    // }