#include <stdio.h>
#include <stdlib.h>

int main (){
    int *ptr = (int*)malloc(sizeof(int));
    *ptr = 10;
    printf("%d\n", *ptr);
    free(ptr);
    ptr = NULL;
    if (ptr == NULL){
        printf("This is a NULL pointer\n");
    }else{
        printf("%d\n", *ptr);
    }  
}