#include <stdio.h>

void main(){
    char ch;
    printf("Enter ch: ");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("Vowel\n");
        break;
    default:
    printf("Not Vowel\n");
        break;
    }
}