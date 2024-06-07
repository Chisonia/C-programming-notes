#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Hello";
    char s2[] = "hello";
    int value;
    value = strcmp(s1, s2);
    if (value == 0){
        printf("Strings are the same\n");
    }else{
        printf("Strings are not the same\n");
    }
    printf("%d\n", value);
}