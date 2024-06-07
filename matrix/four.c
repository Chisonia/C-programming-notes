#include <stdio.h>

#define M 50
int main(){
    int a[M][M], b[M][M], c[M][M], i, j, k, w, x, y, z, sum;
    printf("Enter number of rows and column for matrix 1\n");
    scanf("%d%d", &w, &x);
    printf("Enter number of rows and column for matrix 2\n");
    scanf("%d%d", &y, &z);
    
    printf("Enter numbers for matrix 1\n");
    for (i = 0; i < w; i++){
        for (j = 0; j < x; j++)
        {
           scanf("%d", &a[i][j]);
        }  
    }

    printf("Enter numbers for matrix 2\n");
    for (i = 0; i < y; i++){
        for (j = 0; j < z; j++)
        {
           scanf("%d", &b[i][j]);
        }  
    }

    printf("Matrix 1\n");
    for (i = 0; i < w; i++){
        for (j = 0; j < x; j++)
        {
           printf("%d ", a[i][j]);
        }
        printf("\n"); 
    }
    printf("Matrix 2\n");
    for (i = 0; i < y; i++){
        for (j = 0; j < z; j++)
        {
           printf("%d ", b[i][j]);
        }
        printf("\n");   
    }
    
    printf ("Multiplication of matrix\n");
    if (x == y){
        for (i = 0; i < w; i++){
            for (j = 0; j < z; j++){
                sum = 0;
                for (k = 0; k < w; k++){
                    sum += a[i][k] * b[k][j];
                    } 
                    c[i][j] = sum;
                }
            }
            for (i = 0; i < w; i++){
                for (j = 0; j < z; j++){
                    printf("%d ", c[i][j]);
                }
                printf("\n");
            }
        }else{
            printf("Can not multiple\n");
        }
    return 0;

}