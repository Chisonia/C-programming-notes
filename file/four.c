#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp;
    char str[50];
    fp = fopen("file.txt", "a");

    printf("Enter a string\n");
    fgets(str, sizeof(str), stdin);
    if (fp == NULL){
        printf("Error");
        exit(1);
    }
    fprintf(fp,"%s\n", str);
    fclose(fp);
    printf("String has been successfully added\n");
}