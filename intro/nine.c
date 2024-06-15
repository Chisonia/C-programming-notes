#include <stdio.h>
//using precedence
void main(){
    int a = 10;
    int b = 11;
    int x;
    x = (a < b) ? a : b;
    printf("%d\n", x);
}