#include <stdio.h>

int main()
{
    int length, breadth;
    printf("Enter your length here %d\n");
    scanf("%d", &length);

    printf("Enter your breadth here %d\n");
    scanf("%d", &breadth);

    printf("The area of your rectangle is %d", length * breadth);
    return 0;
}