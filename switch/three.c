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
    int a, b, c, d;
    int entry;
    printf("Enter number 0 to add, 1 to sub, 2 to multiple and 3 to Div: ");
    scanf("%d", &entry);
    switch (entry)
    {
    case 0:
    a = add();
    printf("%d\n", a);
    break;
    case 1:
    b = sub();
    printf("%d\n", b);
    break;
    case 2:
    c = mult();
    printf("%d\n", c);
    break;
    case 3:
    d = div();
    printf("%d\n", d);
    break;
    }
}