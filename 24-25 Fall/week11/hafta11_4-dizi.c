#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void kazikazanOyunu();

int main() {
    srand(time(NULL)); // Rastgelelik için tohumlama

    kazikazanOyunu();

    return 0;
}

void kazikazanOyunu() {
    int oduller[9];        // Her hücre için ödüller
    int durumlar[9] = {0}; // 0: Kapalı, 1: Açık

    // Ödülleri rastgele oluştur
    for (int i = 0; i < 9; i++) {
        oduller[i] = rand() % 10; // 0-9 arasında ödüller
    }

    printf("Kazı Kazan Oyunu\n");
    printf("9 hücrelik kart oluşturuldu! Kazanmak için hücreleri seçin.\n");

    while (1) {
        // Kartın durumunu göster
        printf("\nKart Durumu:\n");
        for (int i = 0; i < 9; i++) {
            if (durumlar[i] == 0) {
                printf(" * "); // Kapalı hücre
            } else {
                printf("%2d ", oduller[i]); // Açılmış hücre
            }

            if ((i + 1) % 3 == 0) {
                printf("\n"); // 3x3 düzeninde gösterim
            }
        }

        // Kullanıcıdan hücre seçimi al
        int secim;
        printf("\nHangi hücreyi kazımak istersiniz? (1-9): ");
        scanf("%d", &secim);

        // Geçerli hücre seçimini kontrol et
        if (secim < 1 || secim > 9) {
            printf("Geçersiz seçim! 1-9 arasında bir hücre seçin.\n");
            continue;
        }

        secim--; // Diziler 0 tabanlı olduğu için 1 eksilt

        if (durumlar[secim] == 1) {
            printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n");
            continue;
        }

        // Hücreyi aç ve ödülü göster
        durumlar[secim] = 1;
        printf("Kazandığınız ödül: %d\n", oduller[secim]);

        // Tüm hücreler açıldı mı?
        int tamamlandi = 1;
        for (int i = 0; i < 9; i++) {
            if (durumlar[i] == 0) {
                tamamlandi = 0;
                break;
            }
        }

        if (tamamlandi) {
            printf("\nTüm hücreler kazındı! Oyun bitti.\n");
            break;
        }
    }
}