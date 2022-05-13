#include <stdio.h>
void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Suraj --> I am Batman"; // Used to change the string
                        // If we use *c it is only read only memory so it cannot change its value
    encrypt(c);
    printf("Encrypted string is %s\n", c);
    return 0;
}