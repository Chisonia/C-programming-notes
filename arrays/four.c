#include <stdio.h>

int main(){
    int marks[6], sum = 0, avg, i;
    for (i = 0; i < 5; i++){
        scanf("%d", &marks[i]);
    }
    for (i = 0; i < 5; i++){
        sum += marks[i];
    }
    avg = sum/5;
    printf("Sum: %f Average: %f ", (float)sum, (float)avg);
}