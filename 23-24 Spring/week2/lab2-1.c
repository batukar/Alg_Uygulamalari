// otomatik yerel dizi

#include <stdio.h>

void fonksiyon(){ // void ile başladığı için return e gerek yoktur

    int otomatikDizi [5] = {1, 2, 3, 4, 5};

    printf("Dizi elemanları: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", otomatikDizi[i]);
    }
    printf("\n");

}

int main(){
    printf("Birinci fonksiyon cagrisi: \n");
    fonksiyon();

    printf("İkinci fonksiyon cagrisi: \n");
    fonksiyon();

}