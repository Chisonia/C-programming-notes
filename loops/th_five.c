#include <stdio.h>

int main(){
    int i = 0, j = 1;

    while (i < 5)
    {
        while(j <= 3){
        printf("%d", j++);
        }
        printf("%d", i++);
    }
}