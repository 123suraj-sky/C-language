#include <stdio.h>
#include <stdlib.h> // It is needed when we want to generate a random number
#include <time.h> // It is needed when we want to generate a random number

int main(){
    
    int n; // n for number
    
    srand(time(0)); // It returns time in seconds. So when we run a programme it will generate different number every time(or we can say that every second)
                    // If we not use srand(time(0)) then the compiler will generate a same number every time
    
    n = rand()%100 + 1; // Used to generate a random number    --> This will generate a random number from 1 to 100
        // This takes remainder of random number(as it is divided by 100 so the remainder is between 0 to 99) So we add 1 to make remainder from 1 to 100 i.e. our random number
    
    //n = rand(); // Used to generate a random number  --> This will generate a random number form 0 to infinity
    
    printf("The number is %d\n", n);

    // Now we use loop so that the loop keep running until the number is gussed
    
    return 0;
}