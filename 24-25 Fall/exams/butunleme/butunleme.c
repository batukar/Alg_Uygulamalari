#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x = 0;

int input();
void pinUret(int uzunluk);

int main() {
    srand(time(NULL)); // Rastgelelik için tohumlama

    int uzunluk = input();

    pinUret(uzunluk);

    return 0;
}

int input() {
    printf("PIN kodunun uzunlugunu girin: ");
    scanf("%d", &x);

    if (x <= 0) {
        printf("Gecersiz uzunluk! Varsayilan uzunluk 4 olarak ayarlandi.\n");
        x = 4; // Varsayılan uzunluk
    }

    return x;
}

// PIN kodu üretim fonksiyonu
void pinUret(int uzunluk) {
    printf("Olusturulan PIN kodu: ");

    for (int i = 0; i < uzunluk; i++) {
        int rakam = rand() % 10; // 0-9 arası rastgele rakam üretir
        printf("%d", rakam);
    }

    printf("\n");
}