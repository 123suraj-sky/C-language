#include <stdio.h>
void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
}

int main()
{
    char c[] = "Tvsbk!..?!J!bn!Cbunbo"; // Used to change the string
                        // If we use *c it is only read only memory so it cannot change its value
    decrypt(c);
    printf("Decrypted string is %s\n", c);
    return 0;
}