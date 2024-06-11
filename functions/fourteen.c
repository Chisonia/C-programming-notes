#include <stdio.h>

//passing array as an argument. 
//Array is passed using call by function reference
int avg(int[], int a);

void main()
{
    int average;
    int marks[5] = {10, 15, 20, 30, 45};
    average = avg (marks, 5);
    printf("avg is %d\n", average);
}

int avg(int marks[], int a)
{
    int sum = 0;
    int avg = 0, i;
    for(i = 0; i < a; i++)
    {
        sum = sum + marks[i];
    }
    avg = sum/a;
    return avg;
}