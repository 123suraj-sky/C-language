#include <stdio.h>

int ArraySum(int MyArray[], int size);

int main()
{
    int MyNumberArray[7] = {100, 20, 30, 60, 234, 5, 87};
    int sum_of_array = ArraySum(MyNumberArray, 7);

    printf("Array sum = %d\n", sum_of_array);

    return 0;
}

int ArraySum(int MyArray[], int size){
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += MyArray[i];
    }
    return sum;
    
}