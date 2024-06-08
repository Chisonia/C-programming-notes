#include <stdio.h>

int main(){
    int a[5] = {1, 3, 6, 5, 8};
    int *p, *q, d;
    p = &a[1];
    q = &a[4];
    d = q - p;
    printf("difference of pointer is: %d\n", d);
    printf("value is:%d\n", *p);
    p = p + 2;
    printf("value is:%d\n", *p);
    printf("address of element is %p\n", p);
    printf("address of pointer is %p\n", &p);
    p = p + 2;
    *p = 34;
    printf("value is: %d\n", *p);
    printf("address of element is %p\n", p);
    
}