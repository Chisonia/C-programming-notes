#include <stdio.h>

int print(int a)
{
    if (a < 1){
        return 1;
    }else{
        return (1 + print(a/2));
    }
}

int main()
{
    int x;
    x = print(10);
    printf("%d\n", x);
}