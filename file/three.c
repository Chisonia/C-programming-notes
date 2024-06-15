#include <stdio.h>
#include <stdlib.h>
//reading a file with fgets
int main()
{
    FILE *fp = NULL;
    char ch[20];
    fp = fopen("file.txt", "r");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    while (!feof(fp))
    {
        fgets(ch, 8 ,fp);
        printf("%s", ch);
    }
    printf("\n");
    fclose(fp);
}