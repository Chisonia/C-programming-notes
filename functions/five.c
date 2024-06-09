#include <stdio.h>
int sum(int*, int*);

int main (void){
    int a, b, c;
    c = sum(&a, &b);
    printf("%d\n", c);
    return 0;
}

int sum(int *a, int *b){
    int x = 5, y = 8, sum = 0;
    *a = x;
    *b = y;
    sum = *a + *b;
    return sum;
}