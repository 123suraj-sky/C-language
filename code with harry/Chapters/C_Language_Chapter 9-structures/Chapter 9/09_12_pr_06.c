#include <stdio.h>
typedef struct complexNum
{
    int real;
    float imaginary;
} CN;

void display(CN c)
{
    printf("The Complex number is %d + %.0fi\n", c.real, c.imaginary);
}

int main()
{
    CN cnums[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value for %d num\n", i + 1);
        scanf("%d", &cnums[i].real);

        printf("Enter the imaginary value for %d num\n", i + 1);
        scanf("%f", &cnums[i].imaginary);
    }

    for (int i = 0; i < 5; i++)
    {
        display(cnums[i]);
    }
    return 0;
}