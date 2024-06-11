#include <stdio.h>
//return a pointer from a function
int *returnPointer(int a[]);

int main(){
    int *p, a[] = {1, 2, 3, 4, 5};
    p = returnPointer(a);
    printf("%d\n", *p);
}
int *returnPointer(int a[])
{
    a = a + 2;
    return a;
}