#include <stdio.h>

int main(){
    int fact = 1;
    int num;

    printf("Sayi girin: \n");
    scanf("%d", &num);

    for (int i = 2; i <= num; i++){
        fact *= i;
    }

    printf("%d! = %d\n", num, fact);
    
}