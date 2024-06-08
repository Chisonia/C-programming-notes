#include <stdio.h>

int main(){
    void *vp;
    int a = 5;
    float b = 1.56;
    char c = 'c';
    vp = &a;
    printf("a is %d\n", *(int *)vp);
    vp = &c;
    printf("a is %d\n", *(char *)vp);
    vp = &b;
    printf("a is %f\n", *(float *)vp);
}