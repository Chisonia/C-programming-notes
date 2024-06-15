#include <stdio.h>

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 != 0){
        printf("Number is  odd\n");
    }else{
        printf("Number is Even\n");    
    }
    return 0;
}