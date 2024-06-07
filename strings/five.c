//Concatenate without using strcat
#include <stdio.h>
#include <string.h>

int main(){
    char s1[30] = "Chinenye ";
    char s2[20] = "Akukalia";
    int len1, len2, i;
    len1 = strlen(s1);
    len2 = strlen(s2);
    for (i = 0; i <= len2; i++){
        s1[len1 + i] = s2[i];
    }
    printf("%s\n", s1);
}