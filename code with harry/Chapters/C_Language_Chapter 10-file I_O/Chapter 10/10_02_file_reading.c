#include <stdio.h>

int main(){
    FILE *ptr;
    int num;
    int num2;
    ptr = fopen("Suraj.txt", "r");
    fscanf(ptr, "%d", &num);
    fscanf(ptr, "%d", &num2);
    printf("The value of num is %d, %d\n", num, num2);
    fclose(ptr); // --> close the file after use (it is a good practice)
    return 0;
}