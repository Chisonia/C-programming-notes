#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = NULL;
    char ch[10] = "Hello";
    char b;
    fp = fopen("file.txt", "r+");
    
    
    if (fp == NULL)
    {
        printf("Error\n");
        exit(1);
    }

    rewind(fp);

    fseek(fp, 2, SEEK_SET); //moves pointer position by 1

    int pos = ftell(fp);//tell the current position of the pointer
    b = fgetc(fp);
        
    if (b != EOF)
    {
        printf("%c\n", b);
    }else{
        printf("Error");
    }
    printf("%d\n", pos);// prints the current postion number
    fputc('g', fp);
    printf("%s", ch);
    fclose(fp);
}