#include <stdio.h>
// Subtraction function
int sub(int *a, int *b){
    int x, y, sub = 0;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    *a = x;
    *b = y;
    sub = *a - *b;
    return sub;
}
int main (void){
    int a, b, c;
    c = sub(&a, &b);
    printf("%d\n", c);
}