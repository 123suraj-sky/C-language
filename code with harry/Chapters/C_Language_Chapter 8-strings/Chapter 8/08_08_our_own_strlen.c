#include <stdio.h>
// int my_strlen(char *str){
//     int rv;
//     for(rv = 0; str[rv] != 0; rv++){

//     }
//     return rv;
// }

int main()
{
    char str[45];
    // char *ptr = str;
    int i = 0;
    printf("Enter Your name: ");
    gets(str);
    puts(str);
    while (str[i] != '\0')
    {
        str[i]++;
        i++;
    }
    printf("Total length of this character is %d\n", i);
    return 0;
}