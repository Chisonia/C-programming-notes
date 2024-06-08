#include <stdio.h>
//Increment and decrement of pointers
int main(){
    int a[] = {2, 4, 5, 6, 6, 8, 10};
    int *p, *q;
    q = a;
    p = a;
    // printf("%d\n", *p++);
    // printf("%d\n", *p++);
    // printf("%d\n", *p++);
    // printf("%d %d\n", *++p, *++p);
    printf("%d %d\n", ++(*p), *++p);
    printf("%d %d\n", *--p, *++p);
    printf("%d %d %d\n", *(p)++, *p++, *++p);
    printf("%d\n", *--p + 5);
    printf("present value: %d\n", *p);
    printf("%d\n", *p + *q);
    printf("%d\n", (*(q + 2))--);
    printf("present value: %d\n", *p);
    printf("%d\n", *(p + 2) - 2);
    printf("%d\n", *(p++ - 2) - 1);
}