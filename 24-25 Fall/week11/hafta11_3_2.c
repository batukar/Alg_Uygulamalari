#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void blackjackOyna();

int main() {
    srand(time(NULL)); // Rastgelelik için tohumlama

    blackjackOyna();

    return 0;
}

void blackjackOyna() {
    int toplam = 0;       // Oyuncunun toplam puanı
    int asSayisi = 0;     // Oyuncunun sahip olduğu As kartlarının sayısı
    int kart;             // Yeni çekilen kart
    char tercih;

    printf("Blackjack Oyununa Hosgeldiniz!\n");
    printf("Amaciniz 21'i gecmeden toplam yapmaktir.\n");

    while (1) {
        // Rastgele bir kart dağıt
        kart = rand() % 13 + 1; // Kartlar 1-13 arasında (1: As, 11: Vale, 12: Kız, 13: Papaz)

        // As kartı kontrolü
        if (kart == 1) {
            printf("Dagitilan kart: As\n");
            asSayisi++;
            toplam += 11; // Başlangıçta As'ı 11 olarak değerlendiriyoruz
        } else if (kart >= 11 && kart <= 13) {
            printf("Dagitilan kart: %s\n", kart == 11 ? "Vale" : kart == 12 ? "Kiz" : "Papaz");
            toplam += 10; // Vale, Kız ve Papaz 10 puan
        } else {
            printf("Dagitilan kart: %d\n", kart);
            toplam += kart; // Diğer kartlar kendi değerinde
        }

        // Eğer toplam 21'i geçerse ve As varsa, As'ın değerini 11'den 1'e çevir
        while (toplam > 21 && asSayisi > 0) {
            toplam -= 10; // As'ın değeri 11 yerine 1 olarak değiştirilir
            asSayisi--;
        }

        printf("Toplam: %d\n", toplam);

        // Eğer toplam 21'i geçerse oyun biter
        if (toplam > 21) {
            printf("Toplam %d! Oyunu kaybettiniz.\n", toplam);
            break;
        }

        // Eğer toplam tam 21 olursa kazanılır
        if (toplam == 21) {
            printf("Tebrikler! 21 yaparak kazandiniz.\n");
            break;
        }

        // Kullanıcıdan devam veya durma kararı al
        printf("Devam etmek istiyor musunuz? (E/e veya H/h): ");
        scanf(" %c", &tercih);

        if (tercih == 'e' || tercih == 'E') {
            continue; // Oyun devam eder
        } else if (tercih == 'h' || tercih == 'H') {
            printf("Oyunu durdurdunuz. Son toplam: %d\n", toplam);
            break;
        } else {
            printf("Geçersiz giriş! Oyunu durduruyorum.\n");
            break;
        }
    }
}