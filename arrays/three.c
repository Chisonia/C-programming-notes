#include <stdio.h>
int main(){
    int a [5], i;
    printf("Enter array elements: ");
    for (i = 0; i <= 5; i++){
        scanf("%d", &a[i]);
    }
    for (i = 5; i >= 0; i--){
        printf("index: %d value: %d\n", i, a[i]);
    }
}