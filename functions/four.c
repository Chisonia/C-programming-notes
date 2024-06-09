#include <stdio.h>

int mul(int *a, int *b){
    int x, y, mul = 0;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    *a = x;
    *b = y;
    mul = *a + *b;
    return mul;
}
int main (void){
    int a, b, c;
    c = mul(&a, &b);
    printf("%d\n", c);
}