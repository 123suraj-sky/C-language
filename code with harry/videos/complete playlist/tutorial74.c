#include <stdio.h>
#include <math.h>
#define PI 3.14159

float Edistance(int x1, int y1, int x2, int y2) // Edistance --> Euclidian Distance
{
    float distance;
    distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
    // printf("\n The distance between two points is %f\n", distance);
    return distance;
}

float areaOfCirlce(int x1, int y1, int x2, int y2, float (*distance)(int x1, int y1, int x2, int y2)) // --> here areaOfCircle is function pointer --> is it true
{
    return distance(x1, y1, x2, y2);
}
int main()
{
    // take x1, y1, x2, y2 from the user using scanf
    int x1, x2, y1, y2;
    float dst; // dst is for distance
    printf("Enter the co-ordinates of 1st point\n");
    printf("Enter absccia of 1st point: ");
    scanf("%d", &x1);
    printf("Enter ordinate of 1st point: ");
    scanf("%d", &y1);

    printf("\nEnter the co-ordinates of 2nd point\n");
    printf("Enter absccia of 2nd point: ");
    scanf("%d", &x2);
    printf("Enter ordinate of 2nd point: ");
    scanf("%d", &y2);

    dst = areaOfCirlce(x1, y1, x2, y2, Edistance);
    printf("\nThe distance between these two points is %f\n", dst);
    printf("The area of the circle whose radius is the distance between these two points is %f\n", PI * dst * dst);
    return 0;
}