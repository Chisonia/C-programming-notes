#include <stdio.h>
#include <string.h>

int main(){
    int a = 10, b = 15, c;
    int *p, *q;
    p = &a;
    q = &b;
    printf("Value of a %d\n", *(&a));
    printf("Value of b %d\n", *q);
    c = *q;
    *p = 20;
    printf("Value of c %d\n", c);
    printf(" Value of A %d\n", a);
    printf("Address of A %p\n", &a);
    printf("Address of P %p\n", &p);
    printf("Address of A %p\n", p);
    q = p;
    int**d = &p;
    printf("value in q %d\n", *q);
    printf("value %p\n", &p);
    printf("value %p\n", *d);
    printf("value %d\n", **d);
    **d = 50;
    printf(" Value of A %d\n", a);
}