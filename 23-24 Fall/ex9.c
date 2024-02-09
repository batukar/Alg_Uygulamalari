// usAlma

#include <stdio.h>

int number = 0;

int input(){ // kullanici girisleri icin gerekli fonksiyon
    printf("Sayi girin: \n");
    scanf("%d", &number);
    return number;
}

int usAlma(int taban, int us){ // taban = 2 , us=3
    int result = 1;

    for (int i = 0; i < us; i++) // 0 dan 3 e kadar
    {
        result *= taban; // result = result * taban
    }

    return result;
    
}

int main(){
    int taban = input();
    int us = input();

    printf("Sonuç = %d\n", usAlma(taban, us));
}