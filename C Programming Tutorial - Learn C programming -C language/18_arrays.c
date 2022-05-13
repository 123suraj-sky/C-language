#include <stdio.h>

int main()
{
    int MyNumberArray[6] = {20, 30, 60, 234, 5, 87};
    int accessArray = MyNumberArray[1];
    printf("Value = %d\n", accessArray);

    char charArray[4] = {'a', 'b', 'c', 'd'};

    MyNumberArray[1] = 45;
    for (int i = 0; i < 6; i++)
    {
        printf("element[%d] = %d\n", i, MyNumberArray[i]);
    }
    
    return 0;
}