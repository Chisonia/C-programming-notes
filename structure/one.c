#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

int main()
{
    struct student s1 = {1, "Chinenye", 70};
    struct student s2 = {2, "Nenye", 80};
    struct student s3 = {3, "Sonia", 90};

    printf("%s\n", s1.name);
    printf("%s\n", s2.name);
    printf("%s\n", s3.name);
    s1 = s2;
    printf("%s\n", s1.name);
    
}
