#include <stdio.h>
#include <stdlib.h>
//reading a file with fgetc
int main()
{
    FILE *fp = NULL;
    char ch;
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    while (!feof(fp))
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
}