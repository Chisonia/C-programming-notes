#include <stdio.h>
int main(){
    int a[10], i;
    for (i = 0; i < 10; i++){
        if (i < 5){
            a[i] = 1;
        }else{
            a[i] = 0;
        }
    }
    for (i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }  
}