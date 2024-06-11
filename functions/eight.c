#include <stdio.h>
//function with return type and with argument
int sum(int a, int b){
    int sum = 0;
    sum = a + b;
    return sum;
}

int main(void){
    int c;
    c = sum(2, 3);
    printf("%d\n",c);
}