#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char str[50];
    char ch;
    fp = fopen("file.txt", "w+");
    if (fp == NULL){
        printf("Error");
        exit(1);
    }

    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    
    fprintf(fp,"%s", str);
    rewind(fp);
    while ((ch = fgetc(fp)) != EOF)
    {
        
        putchar(ch);
    }
    
    fclose(fp);
    printf("String has been successfully added\n");
}