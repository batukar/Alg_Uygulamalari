#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x = 0;

int input();
void sifreUret(int uzunluk);

int main() {
    srand(time(NULL));

    int uzunluk = input();

    sifreUret(uzunluk);

    return 0;
}

int input() {
    printf("Sifrenin uzunlugunu girin: ");
    scanf("%d", &x);

    return x;
}

// Şifre üretim fonksiyonu
void sifreUret(int uzunluk) {
    printf("Olusturulan sifre: \n");

    for (int i = 0; i < uzunluk; i++){

        int secim = rand() % 3;
        int ascii;

        switch (secim)
        {
        case 0:
            ascii = rand() % 26 + 65; // A-Z
            break;
        case 1:
            ascii = rand() % 26 + 97;
            break;
        case 2:
            ascii = rand() % 10 + 48;
            break;
        default:
            break;
        }
        printf("%c", ascii);
    }
    
}