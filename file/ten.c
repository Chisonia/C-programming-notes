#include <stdio.h>
#include <stdlib.h>
//Copying a file's content to another
int main()
{
    FILE *fp1, *fp2;
    char c, d;
    int i, len = 0;
    fp1 = fopen("file.txt", "r");
    if (fp1 == NULL)
    {
        printf("Error");
        exit(1);
    }
    fp2 = fopen("file2.txt", "w");
    if (fp2 == NULL)
    {
        printf("Error");
        exit(1);
    }
    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp2);
    }
    fclose(fp1);
    fclose(fp2);
    fp2 = fopen("file2.txt", "r");
    if (fp2 == NULL)
    {
        printf("Error");
        exit(1);
    }
    while((d = fgetc(fp2)) != EOF)
    {
       printf("%c", d);
    }
    printf("\n");
    fclose(fp2);
}
