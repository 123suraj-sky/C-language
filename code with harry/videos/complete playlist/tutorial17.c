#include <stdio.h>

int main()
{
// label:
//     printf("We are inside label\n");
//     goto end;
//     printf("Hello World\n");
//     goto label;
// end:
//     printf("We are at end\n");

int num;
for (int i = 0; i < 8; i++)
{
    printf("%d\n", i);
    for (int  j = 0; j < 8; j++)
    {
        printf("Enter a number and 0 to exit.\n");
        scanf("%d", &num);
        if(num == 0){
            // break; // Only exit from 1 loop
            goto end; // exit from all loop and goto line 28 which is end
        }
    }
    
}
end:

    return 0;
}