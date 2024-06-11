#include <stdio.h>

void modify(char[], char[]);

void main()
{
    char str1[] = "Jenny";
    char str2[] = "Mahotra";
    modify (str1, str2);
}

void modify(char str1[], char str2[])
{
    int i, len = 0;
    for (i = 0; str1[i] != '\0'; i++)
    {
        len = len + 1;
    }
    printf("length of first string is %d\n", len);
    str2[1] = 'e';
    printf("%s\n%s\n", str1, str2);
}