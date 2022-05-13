#include <stdio.h>
struct game{
    int car;
    float cricket;
};

int main(){
    struct game car, cricket;
    struct game *ptrcar, *ptrcricket;

    ptrcar = &car;
    ptrcricket = &cricket;

    (*ptrcar).car = 1;
    (*ptrcricket).cricket = 10;
    printf("Car is %d\nCricket is %f\n", (*ptrcar).car, (*ptrcricket).cricket);

    ptrcar -> car = 100;
    ptrcricket -> cricket = 1000;

    printf("Car is %d\nCricket is %f\n", ptrcar -> car, ptrcricket -> cricket);  
    return 0;
}