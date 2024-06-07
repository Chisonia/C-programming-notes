#include <stdio.h>
#include <string.h>

int main(){
    char s1[] = "Hello\n", ch;
    int i, j, len;
    len = strlen(s1);
    // printf("%s", s1);
    // for (i = 0; i < len/2; i++){
    //     ch = s1[i];
    //     s1[i] = s1[len - 1 - i];
    //     s1[len - 1 - i] = ch;
    // } or

    for (i = 0, j = len - 1; i < j; i++, j--){
        ch = s1[i];
        s1[i] = s1[j];
        s1[j] = ch;
    }
    printf("%s\n", s1);
}