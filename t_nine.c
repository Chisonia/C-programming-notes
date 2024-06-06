#include <stdio.h>

void main(){
    int age;
    printf("Enter number: ");
    scanf("%d", &age);
    switch (age)
    {
    case 16:
    printf("Hello sweet 16\n");
    break;
    case 20:
    printf("Not in the group I am searching for\n");
    break;
    default:
    printf("Not in the group an am searching for\n");
        break;
    }
    printf("Everyone is cool though\n");
}