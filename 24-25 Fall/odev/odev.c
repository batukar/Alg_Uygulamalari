#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int x = 0; // global değişken
// Fonksiyon prototipleri
int input();
int zarAt(int zarSayisi);
int sonucYazdir(int oyuncu1Skor, int oyuncu2Skor);

int main() {
    int zarSayisi = input();

    srand(time(NULL)); // Rastgelelik için tohumlama

    // Oyuncu 1 için zar atışı
    printf("\nOyuncu 1 zar atiyor:\n");
    int oyuncu1Skor = zarAt(zarSayisi);
    printf("Oyuncu 1 toplam skoru: %d\n", oyuncu1Skor);

    // Oyuncu 2 için zar atışı
    printf("\nOyuncu 2 zar atiyor:\n");
    int oyuncu2Skor = zarAt(zarSayisi);
    printf("Oyuncu 2 toplam skoru: %d\n", oyuncu2Skor);

    // Sonucu yazdır
    sonucYazdir(oyuncu1Skor, oyuncu2Skor);

    return 0;
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

// Zar atma işlemini gerçekleştiren fonksiyon
int zarAt(int zarSayisi) {
    int toplamSkor = 0;

    for (int i = 0; i < zarSayisi; i++) {
        int zar = rand() % 6 + 1; // 1-6 arasında zar atışı
        printf("  Zar %d: %d\n", i + 1, zar);
        toplamSkor += zar;
    }

    return toplamSkor; // Oyuncunun toplam skorunu döndür
}

// Sonuçları yazdıran ve kazananı döndüren fonksiyon
int sonucYazdir(int oyuncu1Skor, int oyuncu2Skor) {
    printf("\n=== Sonuc ===\n");

    if (oyuncu1Skor > oyuncu2Skor) {
        printf("En sansli oyuncu: Oyuncu 1, Skoru: %d\n", oyuncu1Skor);
        return 1; // Oyuncu 1 kazandı
    } else if (oyuncu2Skor > oyuncu1Skor) {
        printf("En sansli oyuncu: Oyuncu 2, Skoru: %d\n", oyuncu2Skor);
        return 2; // Oyuncu 2 kazandı
    } else {
        printf("Beraberlik! Iki oyuncunun skoru: %d\n", oyuncu1Skor);
        return 0; // Beraberlik
    }
}