#include <stdio.h>

int main(){
    int i, j, a, b;
    printf("Enter width and height: ");
    scanf("%d%d", &a, &b);
    for(j = 0; j < b; j++){
        for (i = 0; i < a; i++){
        printf("*");
        }
        printf("\n");
    } 
    return 0;
}