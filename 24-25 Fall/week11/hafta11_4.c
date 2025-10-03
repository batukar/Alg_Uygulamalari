#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Hücre ödülleri ve durumları (0: Kapalı, 1: Açık)
    int h1, h2, h3, h4, h5, h6, h7, h8, h9;
    int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0, d9 = 0;

    // Rastgele ödülleri atama
    srand(time(NULL));
    h1 = rand() % 10; h2 = rand() % 10; h3 = rand() % 10;
    h4 = rand() % 10; h5 = rand() % 10; h6 = rand() % 10;
    h7 = rand() % 10; h8 = rand() % 10; h9 = rand() % 10;

    printf("Kazı Kazan Oyunu\n");
    printf("9 hücrelik kart oluşturuldu! Kazanmak için hücreleri seçin.\n");

    int kazinmisHucresayisi = 0;
    while (kazinmisHucresayisi < 9) {
        // Kartın durumunu göster
        printf("\nKart Durumu:\n");
        printf(" %c  %c  %c \n", d1 ? '0' + h1 : '*', d2 ? '0' + h2 : '*', d3 ? '0' + h3 : '*');
        printf(" %c  %c  %c \n", d4 ? '0' + h4 : '*', d5 ? '0' + h5 : '*', d6 ? '0' + h6 : '*');
        printf(" %c  %c  %c \n", d7 ? '0' + h7 : '*', d8 ? '0' + h8 : '*', d9 ? '0' + h9 : '*');

        // Hücre seçimi al
        int secim;
        printf("\nHangi hücreyi kazımak istersiniz? (1-9): ");
        scanf("%d", &secim);

        // Geçerli hücre seçimini kontrol et
        if (secim < 1 || secim > 9) {
            printf("Geçersiz seçim! 1-9 arasında bir hücre seçin.\n");
            continue;
        }

        // Hücreyi aç
        switch (secim) {
            case 1:
                if (d1) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d1 = 1; printf("Kazandığınız ödül: %d\n", h1); break;
            case 2:
                if (d2) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d2 = 1; printf("Kazandığınız ödül: %d\n", h2); break;
            case 3:
                if (d3) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d3 = 1; printf("Kazandığınız ödül: %d\n", h3); break;
            case 4:
                if (d4) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d4 = 1; printf("Kazandığınız ödül: %d\n", h4); break;
            case 5:
                if (d5) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d5 = 1; printf("Kazandığınız ödül: %d\n", h5); break;
            case 6:
                if (d6) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d6 = 1; printf("Kazandığınız ödül: %d\n", h6); break;
            case 7:
                if (d7) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d7 = 1; printf("Kazandığınız ödül: %d\n", h7); break;
            case 8:
                if (d8) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d8 = 1; printf("Kazandığınız ödül: %d\n", h8); break;
            case 9:
                if (d9) { printf("Bu hücre zaten kazındı! Başka bir hücre seçin.\n"); continue; }
                d9 = 1; printf("Kazandığınız ödül: %d\n", h9); break;
        }

        kazinmisHucresayisi++;
    }

    printf("\nTüm hücreler kazındı! Oyun bitti.\n");
    return 0;
}