#include <stdio.h>
//function with return type and no argument
int sum(void){
    int a = 10, b = 4, sum = 0;
    sum = a + b;
    return sum;
}

int main(void){
    int c;
    c = sum();
    printf("%d\n",c);
}