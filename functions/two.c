#include <stdio.h>
//Addition function
int sum(int *a, int *b){
    int x, y, sum = 0;
    printf("Enter two numbers\n");
    scanf("%d %d", &x, &y);
    *a = x;
    *b = y;
    sum = *a + *b;
    return sum;
}
int main (void){
    int a, b, c;
    c = sum(&a, &b);
    printf("%d\n", c);
}