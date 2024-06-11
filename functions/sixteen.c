#include <stdio.h>
//returning a string from a function without modification of the string.
const char* display();
void main(){
    const char *str;
    str = display();

    printf("string is: %s\n", str);
}

const char* display()
{
    const char* str = "Jenny";
    return str;
}