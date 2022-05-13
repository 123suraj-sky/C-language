#include <stdio.h>

void copy(void *dest, const void *src, int size)
{
    for (int i = 0; i < size; i++)
    {
        // *(char *)dest = *(char *)src;
        // dest = (char *)dest + 1;
        // src = (char *)src + 1;

        //! Above three lines of code can be expressed in 1 line as follows
        *((char *)dest + i) = *((char *)src + i);
    }
}

int main()
{
    int a = 10, b;
    double x = 20.3, y;

    copy(&b, &a, sizeof(int));
    copy(&y, &x, sizeof(double));

    printf("b is %d\n", b);
    printf("y is %lf\n", y);
    return 0;
}