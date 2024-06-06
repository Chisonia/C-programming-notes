#include <stdio.h>

int main(){
    int number, i, mul;
    printf("Enter a number: ");
    scanf("%d", &number);
    for (i = 1; i <= 100; i++){
        mul = number * i;
        printf("%d\n", mul);
    }
}