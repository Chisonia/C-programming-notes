#include <stdio.h>
#include <string.h>
//Convert uppercase to lower case without using predefined function

int main(){
    char s1[] = "CHINENYE";
    int i, len;
    len = strlen(s1);
    // for (i = 0; s1[i] != '\0'; i++){
    //     if (s1[i] >= 65 && s1[i] <= 90){
    //         s1[i] = s1[i] + 32;
    //     }
    // }OR
    
    for (i = 0; i < len; i++){
        if (s1[i] >= 'A' && s1[i] <= 'Z'){
            s1[i] = s1[i] + 32;
        } 
    }
    printf("%s\n", s1);
}