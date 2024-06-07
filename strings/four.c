//Concatenate with strcat
#include <stdio.h>
#include <string.h>

int main(){
    char s1[30] = "Chinenye ";
    char s2[20] = "Akukalia";
    strcat(s1, s2);
    printf("%s\n", s1);
}