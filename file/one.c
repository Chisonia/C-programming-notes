#include <stdio.h>
#include <string.h>
//write into a file
int main(){
    FILE *fp;
    //char ch = 'a';
    //int i;
    int a = 10;
    char str[50] = "Jenny";
    //int count = strlen(str); 
    fp = fopen("file.txt", "w");
    // for (i = 0; i != count; i++)
    // {
    //    fputc(str[i], fp);  
    // }
    //fputc(ch, fp);
    //fputs(str, fp);
    if (fp == NULL){
        printf("Error");
    }
    fprintf(fp,"%d %s", a, str);
    fclose(fp);
}