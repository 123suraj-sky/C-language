#include <stdio.h>

int main(){
    FILE *fptr;
    int number = 556;
    fptr = fopen("generated.txt", "w");
    fprintf(fptr, "The number is %d\n", number);
    fprintf(fptr, "Thanks for using fprinf\n");
    fclose(fptr);
    return 0;
}