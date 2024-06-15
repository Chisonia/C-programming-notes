#include <stdio.h>
#include <stdlib.h>
// Allocating memory dynamically using malloc
int main()
{
    int n, i, *p;
    printf("Enter total number of value\n");

    scanf("%d", &n);// take input from user
    p = (int*)malloc(n * sizeof(int));// allocate memory, and type cast void pointer being return to int and store in a pointer 
    
    if(p == NULL)
    {
        printf("Error allocating memory");//handles failure of memory allocation
        exit(1);
    }
    printf("Enter values\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", (p + i));// take input from user
    }

    printf("Values are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d\n", *(p + i));//print values
    }
    free(p);
    return 0;
}