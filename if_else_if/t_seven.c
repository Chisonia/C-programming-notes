#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 != 0){
        if(a == 10){
            printf("I am 10\n");
        }else{
            printf("I am not 10\n");
        }
    }else{
        printf("I am even\n");  
    }
    return 0;
}