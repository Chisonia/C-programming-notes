#include <stdio.h>

int main (){
    int a[4][6];
    int i, j;
    printf("Enter numbers: ");
    for (i = 0; i < 4; i++ ){
        for (j = 0; j < 6; j++){
            scanf("%d", &a[i][j]);
            }
        }
    for (i = 0; i < 4; i++ ){
        for (j = 0; j < 6; j++){
            printf("%d", a[i][j]);
            }
            printf("\n");
        }
        printf("%d\n", a[0][5]);
        printf("%d\n", a[3][5]);
        return 0;
}
