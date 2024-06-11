#include <stdio.h>

//function without return type and with argument
int sum(int a, int b){
    int sum = 0;
    sum = a + b;
    printf("%d\n", sum);
}

int main(void){
    int c;
    c = sum(2, 3);
}