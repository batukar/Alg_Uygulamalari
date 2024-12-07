#include <stdio.h>

int main(){
    int x;
    int toplam = 0;

    for (int i = 0; i < 5; i++){
        printf("Sayi girin:\n");
        scanf("%d", &x);

        toplam += x;
    }
    
    printf("Girilen sayilarin toplamı = %d", toplam);
}