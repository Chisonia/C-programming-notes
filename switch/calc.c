#include <stdio.h>

void main (){
    int a, b, sum, sub, prod, div;
    char operator;
    printf("Enter operator: ");
    scanf("%c", &operator);
    printf("Enter 2 numbers: ");
    scanf("%d%d", &a, &b);

    switch (operator)
    {
    case '+':
        sum = a + b;
        printf ("Sum: %d\n", sum);
        break;
        case '-':
        sub = a - b;
        printf ("Minus: %d\n", sub);
        break;
        case '*':
        prod = a * b;
        printf ("Product: %d\n", prod);
        break;
        case '/':
        prod = a / b;
        printf ("Division: %d\n", div);
        break;
    default:
        printf ("Enter a valid operator\n");
        break;
    }
}