#include <stdio.h>

int main(){
    int i, j;
    for (i = 0, j = 0; i <= 30 || j < 100;){
        printf("%d %d\n", i, j);
        i++, j++;
    }
    printf("Hello World\n");
    return 0;
}