//notes: Function identifier itself holds the address of that function
//notes: i.e. name of the function also holds the address of the function

#include <stdio.h>

void sort(int b[], int n, int (*customCompare)(int, int))
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (customCompare(b[i], b[j]) > 0)
            {
                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
}

void print(int b[], int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", b[i]);
    }
}

int ascCompare(int a, int b) // ascending comparison
{
    // if (a > b)
    //     return 1;
    // else
    //     return 0;
    //* Above four line of code can also be written in below one line

    return a - b;
}

int descCompare(int a, int b) // decending comparison
{
    return b - a;
}

int main()
{
    int arr[] = {1, 20, 2, 19, 5};
    int n = 5;

    sort(arr, n, ascCompare);
    print(arr, n);
    printf("\n");
    
    sort(arr, n, descCompare);
    print(arr, n);
    printf("\n");
    return 0;
}