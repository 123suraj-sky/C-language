#include <stdio.h>
void soup(void);

int main()
{
    printf("For breakfast I had ");
    soup();
    printf("For lunch I had ");
    soup();
    return 0;
}
void soup(void)
{
    puts("Pea green soup!");
}