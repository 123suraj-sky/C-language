#include <stdio.h>

int main(){
    int marks[4]; // allocate space for 4 integers

    printf("Enter marks of student 1: ");
    scanf("%d", &marks[0]);
    printf("Enter marks of student 2: ");
    scanf("%d", &marks[1]);
    printf("Enter marks of student 3: ");
    scanf("%d", &marks[2]);
    printf("Enter marks of student 4: ");
    scanf("%d", &marks[3]);

    printf("You have entered %d, %d, %d and %d\n", marks[0], marks[1], marks[2], marks[3]);
    return 0;
}