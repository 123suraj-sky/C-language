#include <stdio.h>
#include <string.h>

union student{
    int id;
    int marks;
    char fav_sub;
    char name[34];
};

int main(){
    union student s1;
    s1.id = 1;
    s1.marks = 45;
    s1.fav_sub = 'a';
    strcpy(s1.name, "Suraj");

    printf("The id is %d\n", s1.id);
    printf("The marks is %d\n", s1.marks);
    printf("The fav_sub is %c\n", s1.fav_sub);
    printf("The name is %s\n", s1.name);
    return 0;
}