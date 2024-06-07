//Concatenate with strncat and specicify number of characters to be added to the destination string
#include <stdio.h>
#include <string.h>

int main(){
    char s1[30] = "Chinenye ";
    char s2[20] = "Akukalia";
    strncat(s1, s2, 3);
    printf("%s\n", s1);
    return 0;
}