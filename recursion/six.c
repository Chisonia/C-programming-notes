#include <stdio.h>
void count(int n)
{
    static int d = 1;
    printf (" n is: %d\n", n);
    printf ("first d is: %d\n", d);
    d++;
    if (n > 1)
    {
        count (n - 1);
    }
    printf("second d is: %d\n", d);
}

void main()
{
    count(3);
}
