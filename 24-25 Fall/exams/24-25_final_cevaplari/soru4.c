#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Global değişken
int bakiye = 20;

// Enum tanımı
enum Icecek { Cay = 5, Kahve = 10, Su = 3 };

// Fonksiyon prototipleri
void menuGoster();
void icecekSecimi();
void bakiyeIslemleri(int fiyat); // Bakiye işlemlerini yapan fonksiyon

int main() {
    printf("Otomata hosgeldiniz!\n");
    printf("Bakiye: %d TL\n", bakiye);

    // Kullanıcı içecek seçimi yapar
    while (bakiye > 0) {
        menuGoster();
        icecekSecimi();
    }

    printf("Tesekkurler, iyi gunler!\n");
    return 0;
}

// Menü gösteren fonksiyon
void menuGoster() {
    printf("\n-- Menu --\n");
    printf("1. Cay (5 TL)\n");
    printf("2. Kahve (10 TL)\n");
    printf("3. Su (3 TL)\n");
    printf("4. Cikis\nSeciminizi yapin: ");
}

// İçecek seçimi işlemini gerçekleştiren fonksiyon
void icecekSecimi() {
    int secim;
    scanf("%d", &secim);

    int fiyat = 0;
    switch (secim) {
        case 1: // Çay
            fiyat = Cay;
            break;
        case 2: // Kahve
            fiyat = Kahve;
            break;
        case 3: // Su
            fiyat = Su;
            break;
        case 4: // Çıkış
            printf("Programdan cikiliyor...\n");
            bakiye = 0;
            return;
        default:
            printf("Gecersiz secim. Lutfen tekrar deneyin.\n");
            return;
    }

    // Bakiye işlemleri yapılır
    bakiyeIslemleri(fiyat);
}

// Bakiye kontrolü ve güncellemesini yapan fonksiyon
void bakiyeIslemleri(int fiyat) {
    if (bakiye >= fiyat) {
        bakiye -= fiyat; // Bakiye güncelleme
        printf("Afiyet olsun! Kalan bakiyeniz: %d TL\n", bakiye);
    } else {
        printf("Yetersiz bakiye! Lutfen baska bir secim yapin.\n");
    }
}