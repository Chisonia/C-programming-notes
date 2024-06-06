#include <stdio.h>

int main (){
    int arr1[6], arr2[6], sumarr[6], i;
    printf("Enter list 1: ");
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter list 2: ");
    for ( i = 0; i < 6; i++)
    {
        scanf("%d", &arr2[i]); 
    }
    for ( i = 0; i < 6; i++)
    {
        sumarr[i] = arr1[i] + arr2[i]; 
        printf("Sum: %d at index %d\n", sumarr[i], i);
    }
}