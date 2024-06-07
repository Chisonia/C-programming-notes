#include <stdio.h>
#include <string.h>

int main(){
    char name[20];
    int i;
    ssize_t count = 0;
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);

    for (i = 0; name[i] != '\0'; i++){
        count++;
    }
    printf("%ld\n", count);
    
}