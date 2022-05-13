// #include <stdio.h>
// #define COUNTRY India

// int main()
// {
// // #if COUNTRY == Pakistan
// //     printf("Pakistani Ruppes\n");
// // #elif COUNTRY == Bangladesh
// //     printf("Taka\n");
// // #elif COUNTRY == Nepal
// //     printf("Nepali Ruppes\n");
// // #else
// //     printf("Indian Ruppes\n");
// // #endif
// #ifdef COUNTRY
// printf("%s is a great country\n", COUNTRY);
// #endif
// #ifndef COUNTRY
// printf("I love my nation\n");
// #endif
//     return 0;
// }

// Why above code is not working properly and below code is working



// #include <stdio.h>
// #define YEARS_OLD 12

// int main()
// {
// #if YEARS_OLD <= 10
//     printf("Less than 10\n");
// #elif YEARS_OLD > 10
//     printf("Greater than 10\n");
// #endif
//     return 0;
// }


// #include <stdio.h>
// #define INPUT

// int main(){
//     int a1 = 5;
//     // #ifdef INPUT
//     // a1 = 2;
//     // printf("a1 is %d\n", a1);
//     #ifndef INPUT
//     a1 = 2;
//     printf("a1 is %d\n", a1);
//     #else
//     printf("Enter the value of a: ");
//     scanf("%d", &a1);
//     #endif
//     printf("The value of a1: %d\n", a1);
//     return 0;
// }


#include <stdio.h>
#define Action(a,b) a##b+a*b
// a##b+a*b
// 3##4+3*4
// 34+3*4
// 46

int main(){
    printf("%d\n", Action(3,4));
    return 0;
}