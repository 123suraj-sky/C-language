#include <stdio.h>

int main(){
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "r+");
    // char c = fgetc(ptr);
    // printf("The character I read was %c\n", c);
    // c = fgetc(ptr);
    // printf("The character I read was %c\n", c);

    char str[4];
    fgets(str, 3, ptr); // here it is 3 so we see 2 character of the string and the last one is '\0' i.e. null terminated character
    printf("The string is %s\n", str);

    // fputc('o', ptr);
    // fputs("This is Suraj", ptr);
    // fclose(ptr);
    return 0;
}