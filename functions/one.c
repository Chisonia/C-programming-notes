#include <stdio.h>
void sum(void); //function declaration. Will not accept argument and returen type is void.

void sum(){// function definition
    int b, a, sum;
    printf("Enter two numbers: \n");
    scanf("%d %d", &a, &b);
    sum = a + b;
    printf("Sum is : %d\n", sum);
}

void main(){
    sum();// calling functions
    printf("Hello!\n");
    sum();
    sum();
}