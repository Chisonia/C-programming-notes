#include <stdio.h>
#include <string.h>

int main(){
    char s1[50], s2[20];
    int len1, len2, i;
    printf("Enter first name: ");
    scanf("%s", s1);
    printf("Enter last name: ");
    scanf("%s", s2);
    len1 = strlen(s1);
    len2 = strlen(s2);

    s1[len1] = ' ';
    len1++;

    for (i = 0; i <= len2; i++){
        s1[len1 + i] = s2[i];
    }
    printf("Concatenated name %s\n", s1);
}