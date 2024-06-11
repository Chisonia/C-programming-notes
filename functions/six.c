#include <stdio.h>
//function without return type and no argument
void sum(void){
    int a = 10, b = 4, sum = 0;
    sum = a + b;
    printf("%d\n", sum);
}

void main(void){
    sum();
}