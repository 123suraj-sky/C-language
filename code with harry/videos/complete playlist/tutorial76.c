#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float Edistance(int x1, int y1, int x2, int y2)
{
    int a = pow((y2 - y1), 2) + pow((x2 - x1), 2);
    return sqrt(a);
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2))
{
    return distance(x1, y1, x2, y2);
}

int main()
{
    int x1, y1, x2, y2;
    float dst; //* dst for distance
    // Take x1, y1 and x2, y2 from the user using scanf
    printf("Enter the value of x1: ");
    scanf("%d", &x1);
    printf("Enter the value of y1: ");
    scanf("%d", &y1);
    printf("Enter the value of x2: ");
    scanf("%d", &x2);
    printf("Enter the value of y2: ");
    scanf("%d", &y2);

    dst = areaOfCircle(x1, y1, x2, y2, Edistance);
    printf("\nThe distance between these points is %.2f\n", dst);

    return 0;
}