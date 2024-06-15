#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char str[10];
    fp = fopen("file.txt", "r+");
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }
    fputc('G', fp);
    fclose(fp);
    printf("String has been successfully added\n");
}