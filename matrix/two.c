#include <stdio.h>

int main (){
    int a[3][3];
    int i, j, sum_row, sum_col;
    printf("Enter numbers: ");
    for (i = 0; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            scanf("%d", &a[i][j]);
            }
        }
    for (i = 0; i < 3; i++ ){
        for (j = 0; j < 3; j++){
            printf("%d ", a[j][i]);
            }
            printf("\n");
        }
    for (i = 0; i < 3; i++ ){
        sum_col = 0, sum_row = 0;
        for (j = 0; j < 3; j++){
            sum_col += a[i][j];
            sum_row += a[j][i];
            }
            printf("SUM_ROW: %d  SUM_COL: %d\n", sum_row, sum_col);
        }
        return 0;
}
