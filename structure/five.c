#include <stdio.h>
//Pointer to structure

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main(){
    struct student s;
    struct student *ptr = &s; //pointer, pointing to the address of the structure
    
    printf("Enter student details (roll number, name, and marks\n");
    
    scanf("%d %s %f", &(*ptr).rollno, (*ptr).name, &(*ptr).marks);

    printf("%d %s %f\n", ptr->rollno, ptr->name, ptr->marks);
}
