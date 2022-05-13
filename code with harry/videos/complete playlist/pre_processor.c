#include <stdio.h>
#define PI 3.14

int main(){
    int r;
    float a;
    printf("Enter radius of a circle: ");
    scanf("%d", &r);
    a = PI * r * r;
    printf("Area of the circle is: %f\n",a);
    return 0;
}