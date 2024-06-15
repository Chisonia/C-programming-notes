#include <stdio.h>

int main(){
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18 && age < 60){
        printf("You are an adult\n");
    }else if(age < 18){
        printf("You are not an adult\n");    
    }else
    {
        printf("You are old\n");
    } 
    return 0;
}