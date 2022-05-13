#include <stdio.h>

int main(){
    FILE *ptr;
    int a, b , c;
    ptr = fopen("pr_01.txt", "r");
    fscanf(ptr, "%d %d %d", &a, &b, &c);
    printf("The value of a, b and c are: %d, %d and %d respectively\n", a, b, c);
    return 0;
}