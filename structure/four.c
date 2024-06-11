#include <stdio.h>
//Array of structure

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main(){
    struct student s[3];
    int i;
    printf("Enter student details (roll number, name, and marks\n");
    for(i = 0; i < 3; i++)
    {
        scanf("%d %s %f", &s[i].rollno, s[i].name, &s[i].marks);
    }
    for (i = 0; i < 3; i++)
    {
        printf("%d %s %f\n", s[i].rollno, s[i].name, s[i].marks);
    }
}
