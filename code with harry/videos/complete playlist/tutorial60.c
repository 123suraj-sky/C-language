#include <stdio.h>

int main(){
    printf("File name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("Line No. is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    return 0;
}