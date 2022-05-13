#include <stdio.h>

int main(){
    int mult[10];
    int a;
    printf("Enter the value whose table you want to print\n");
    scanf("%d", &a);
    for (int i = 0; i < 10; i++)
    {
        mult[i] = a * (i + 1);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d x %d = %d\n", a, i + 1, mult[i]);
    }
    return 0;
}