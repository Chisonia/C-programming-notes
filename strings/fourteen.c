#include <stdio.h>
#include <string.h>
//Convert uppercase to lower case without using predefined function

int main(){
    char s1[] = "chinenye";
    int i, len;
    len = strlen(s1);
    // for (i = 0; s1[i] != '\0'; i++){
    //     if (s1[i] >= 93 && s1[i] <= 122){
    //         s1[i] = s1[i] - 32;
    //     }
    // }OR
    
    for (i = 0; i < len; i++){
        if (s1[i] >= 'a' && s1[i] <= 'z'){
            s1[i] = s1[i] - 32;
        } 
    }
    printf("%s\n", s1);
}