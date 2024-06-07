#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i;
    ssize_t count;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    count = strlen(name);
    printf("%ld\n", count);
}