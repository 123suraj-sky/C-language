#include <stdio.h>
#include <string.h>

int main()
{
    char st1[34];
    char st2[34];
    char c;
    int i = 0;
    printf("Enter the value of first string\n");
    scanf("%s", st1);
    printf("Enter the value of second string character by character\n");

    while (c != '\n')
    {
        fflush(stdin); // Used to flush or clear the scanf value
        scanf("%c", &c);
        printf("%c", c);
        st2[i] = c;
        i++;
    }

    st2[i-1] = '\0';  // To make both st1 and st2 same by avoiding \n 
                        // It will put \0 in the last character
    printf("string st1 is %s\n", st1);
    printf("string st2 is %s\n", st2);
    printf("strcmp for st1 and st2 returns %d\n", strcmp(st1, st2));
    return 0;
}