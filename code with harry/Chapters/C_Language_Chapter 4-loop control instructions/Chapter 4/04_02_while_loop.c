#include <stdio.h>

int main(){
    int a;
    scanf("%d", &a);
    while(a<10){
    // while(a>10){ --> This will lead to infinte loop and to stop that loop use any shortcut for instant and after terminating the programme delete that shortcut --> For the shortcut go to keyboard and search for kill
        printf("%d\n", a);
        a++;
    }
    return 0;
}