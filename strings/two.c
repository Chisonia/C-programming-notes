#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i = 0;
    ssize_t count = 0;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    while(name[i] != '\0'){
        if (name[i] == '\n'){   //This block removes the new line added by fgets
            name[i] = '\0';
            break;
        }
        i++;
    }

    i = 0;
    while(name[i] != '\0'){
        count++;
        i++;
    }
    printf("%ld\n", count);   
}