#include <stdio.h>

int main(){
    int age;
    int vipPass = 0;
    // vipPass = 1;  --> If this function is on then any person can drive
    printf("Enter your age \n");
    scanf("%d", &age);

    if ((age < 70 && age > 18) || vipPass==1)
    // if ((age < 70 && age > 18) || !(vipPass==1))  --> If this condition is true then it will allow everyone to drive as ! is used for not i.e. false
    {
        printf("You are above 18 and below 70, you can drive\n");
    }

    else
    {
        printf("You cannot drive\n");
    }
    return 0;
}