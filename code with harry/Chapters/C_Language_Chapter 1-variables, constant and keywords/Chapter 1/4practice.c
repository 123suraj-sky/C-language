#include <stdio.h>

int main(){
    int principal=100, rate=4, years=1;
    int simpleIntrest = (principal* rate* years)/100;
    printf("The value of simpleIntrest is %d",simpleIntrest);
    return 0;
}