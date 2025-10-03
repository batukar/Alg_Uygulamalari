// otomatik-yerel dizi
#include <stdio.h>

void fonksiyon(){

    int otomatikDizi [5] = {1, 2, 3, 4, 5};

    static int statikDizi[5] = {6, 7, 8, 9, 10};

    printf("Otomatik dizi elemanları: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", otomatikDizi[i]);
    }
    printf("\n");

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

    for (int i = 0; i < 5; i++)
    {
        otomatikDizi[i]++;
    }

}

int main(){
    printf("Birinci fonksiyon cagrisi: \n");
    fonksiyon();

    printf("İkinci fonksiyon cagrisi: \n");
    fonksiyon();
}