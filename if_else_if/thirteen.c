#include <stdio.h>
void main(){
    int a, b, c;
    a = 90;
    b = 20;
    c = 4;
    if (a > b && c < b){
        printf("%d\n", a + c);
    }else{
        printf("%d\n", b + c);
    }
}