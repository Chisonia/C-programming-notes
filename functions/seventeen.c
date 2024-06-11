#include <stdio.h>
#include <string.h>
//returning a string from a function with modification of the string.
const char* display();

void main(){
    char str[50]; // create writable array

    strcpy(str, display());
    printf("string is: %s\n", str);

    str[0] = 'Z';
    printf("string is: %s\n", str);
}

const char* display()
{
    const char* str = "Jenny";
    return str;
}