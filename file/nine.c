#include <stdio.h>
#include <stdlib.h>

int main ()
{
    FILE *fp = NULL;
    int i = 1;
    char ch;
    fp = fopen("file.txt", "r+");
    if (fp == NULL)
    {
        printf("Error");
        exit(1);
    }
    
    //while ((ch = fgetc(fp)) != EOF)
    for ((ch = fgetc(fp)); ch != EOF; ch = fgetc(fp))
    {
        if(ch == '\n')
        {
            i++;
        }
    }
    fclose(fp);
    printf("%d\n", i );
    return 0;
}