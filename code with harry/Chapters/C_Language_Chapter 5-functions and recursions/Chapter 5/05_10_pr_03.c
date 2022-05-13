#include <stdio.h>
float force(float mass);

int main()
{
    float m; // m is used for mass
    printf("Enter the value of mass in Kgs\n");
    scanf("%f", &m);
    printf("The value of Force in Newton is %.2f\n", force(m));
                        // Here we also use %.0f to get result only in integers
    return 0;
}

float force(float mass)
{
    float result = mass * 9.8;
    return result;
}