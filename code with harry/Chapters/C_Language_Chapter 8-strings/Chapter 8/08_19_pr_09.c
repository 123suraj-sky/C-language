#include <stdio.h>
int occurence(char st[], char c)
{
    char *ptr = st;
    int count = 0;
    while (*ptr != '\0')
    {
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}

int main()
{
    char st[50];
    printf("Enter any character: ");
    gets(st);
    int count = occurence(st, 'h'); // --> 'h' is given character
    if(count > 0){
        printf("The character 'h' is present in %s\n", st);
    }
    else{
        printf("The character 'h' is not present in %s\n", st);
    }
    return 0;
}