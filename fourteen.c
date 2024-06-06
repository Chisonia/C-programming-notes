#include <stdio.h>
void main(){
    int a, b, c, d, e;
    a = 18;
    b = 9;
    c = b++;
    d = b;
    e = 10;
    printf("%d\n", a < b < c > d);
    printf("%d\n", b == e);
    printf("%d\n", c + 1 > e);
    printf("%d\n", a + c == b > e < c + d);
    printf("%d\n", a + c == b >= e < c + d != 1);
}