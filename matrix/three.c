#include <stdio.h>

int main(){
    int a[2][3], b[2][3], c[2][3], i, j;
    printf("Enter matrix 1: ");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter matrix 2: ");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            scanf("%d", &b[i][j]);
        }
    }
    printf("Matrix 1\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix 2\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("Sum of 2 matrix\n" );

    for (i = 0; i < 2; i++){
            for (j = 0; j < 3; j++){
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
}