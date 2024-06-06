#include <stdio.h>

void main(){
    int a, b, c;
    a = 3 * 4 % 5 / 2;
    b = 3 * (4 % 5) / 2;
    c = 3 * (4 + 5) * 6;
    printf("%d\n%d\n%d\n", a, b, c);
}