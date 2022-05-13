#include <stdio.h>
void display(); // Function Prototype

int main()
{
    char a = 'a';
    printf("This is %c\n", a);
    printf("Intializing display function\n");
    display(); // Fuction Call
    printf("Display function end\n");
    return 0;
}

// Fuction Definition
void display()
{
    printf("This is display\n");
}