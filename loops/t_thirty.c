#include <stdio.h>

void main(){
    int a, sum = 0;
    while(1){
        printf("Enter number: ");
        scanf("%d", &a);
        if (a < 0){
            break;
        }
        sum +=a;
    }
    printf("%d\n", sum);
}