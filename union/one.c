#include <stdio.h>
//Pointer to structure

union student
{
    int rollno;
    char name[20];
};

void main(){
    union student s;
    union student *ptr = &s; //pointer, pointing to the address of the structure
    
    printf("Enter student details (roll number, name, and marks\n");
    
    scanf("%d %s", &(*ptr).rollno, (*ptr).name);

    printf("%d %s\n", ptr->rollno, ptr->name);
}
