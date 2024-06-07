#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "hello";
    char s2[] = "Hello";
    int flag, i;
    flag = 0;
    for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++){
        if(s1[i] != s2[i]){
            flag = 1;
            break;
        }   
    }
    if (flag == 0){
        printf("Strings are the same\n");
    }else{
        printf("Strings are not the same");
    }
}