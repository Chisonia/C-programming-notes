#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i;
    ssize_t count;
    ssize_t len;

    printf("Enter your name: ");
    if (fgets(name, sizeof(name), stdin) != NULL){
        len = strlen(name);
        if (len > 0 && name[len - 1] == '\n'){
            name[len - 1] = '\0';
        }
    }
    count = strlen(name);
    printf("%ld\n", count);
}