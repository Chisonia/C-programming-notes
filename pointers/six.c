#include <stdio.h>

int main(){
    int *ptr = NULL;
    if (ptr == NULL) {
        printf("This is a NULL pointer\n");
    }else{
        printf("%d", *ptr);
    }
}