#include <stdio.h>

void main(){
    int a, i, sum = 0;
    for (i = 1; i <= 5; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
        sum += a;
    }
    printf("%d\n", sum);
}