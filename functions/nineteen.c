#include <stdio.h>

#include <stdio.h>
int add()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    return a + b;
}

int sub()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    return a - b;
}

int mult()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    return a * b;
}

int div()
{
    int a, b;
    printf("Enter 2 numbers\n");
    scanf("%d %d", &a, &b);
    if (b == 0){
        printf("Can't divide with zero");
    }
    return a / b;
}

int main(){
    int a, b, c;
    int entry;
    int (*fptr[10])(int, int) = {add, sub, mult, div};
    printf("Enter number 0 to add, 1 to sub, 2 to multiple and 3 to Div: ");
    scanf("%d", &entry);
    c = (*fptr[entry])(a, b);
    printf("%d\n", c);
}