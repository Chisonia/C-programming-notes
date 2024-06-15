#include <stdio.h>

void main(){
    int y = 20;
    int x = 9;
    int a = 0;
    a += x+y;
    a %= x;
    printf("%d\n", a);
}
