#include <stdio.h>

int main(){
    int num[10], even = 0, odd = 0, i;
     printf("Enter number: ");
    for (i = 0; i < 10; i++){
        scanf("%d", &num[i]);
    }
    for (i = 0; i < 10; i++){
       if (num[i] % 2 == 0){
        even++;
       }else {
        odd++;
       }
    }
    printf("Even: %d Odd: %d ", even, odd);
}