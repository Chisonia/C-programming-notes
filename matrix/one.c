#include <stdio.h>

int main (){
    int a[4][6];
    int i, j, sum;
    printf("Enter numbers: ");
    for (i = 0; i < 4; i++ ){
        for (j = 0; j < 6; j++){
            scanf("%d", &a[i][j]);
            }
        }
    for (i = 0; i < 6; i++ ){
        for (j = 0; j < 4; j++){
            printf("%d ", a[j][i]);
            }
            printf("\n");
        }
        return 0;
}
