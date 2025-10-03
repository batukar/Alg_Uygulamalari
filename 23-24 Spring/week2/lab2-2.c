// statik yerel dizi
#include <stdio.h>

void fonksiyon(){

    static int statikDizi[5] = {6, 7, 8, 9, 10};

    printf("Statik dizi elemanları: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", statikDizi[i]);
    }
    printf("\n");
    
    for (int i = 0; i < 5; i++)
    {
        statikDizi[i]++;
    }
    
}

int main(){
    printf("Birinci fonksiyon cagrisi: \n");
    fonksiyon();

    printf("İkinci fonksiyon cagrisi: \n");
    fonksiyon();
}