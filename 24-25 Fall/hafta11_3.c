#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void blackjackOyna();

int main() {
    srand(time(NULL));

    blackjackOyna();

    return 0;
}

void blackjackOyna() {
    int toplam = 0;
    int kart;
    char tercih;

    printf("Blackjack Oyununa Hosgeldiniz!\n");
    printf("Amaciniz 21'i gecmeden toplam yapmaktir.\n");

    while(1){
        kart = rand() % 13 + 1;

        if(kart == 1){
            printf("Dagitilan kart: AS\n");
            toplam++;
        }else if(kart >= 11 && kart <= 13){
            printf("Dagitilan kart: %s\n", kart == 11 ? "Vale" : kart == 12 ? "Kız" : "Papaz");
            toplam += 10;
        }else{
            printf("Dagitilan kart: %d\n", kart);
            toplam += kart;
        }

        printf("Toplam %d\n", toplam);

        if(toplam > 21){
            printf("Oyunu kaybettiniz! Toplam = %d\n", toplam);
            break;
        }

        if(toplam == 21){
            printf("Oyunu kazandiniz! Toplam = %d\n", toplam);
            break;
        }

        printf("Devam etmek istiyor musunuz? (E/h)\n");
        scanf(" %c", &tercih);

        if(tercih == 'e' || tercih == 'E'){
            continue;
        }else if(tercih == 'h' || tercih == 'H'){
            printf("Oyundan cekildiniz!");
            break;
        }else{
            printf("Gecersiz giris!");
            break;
        }
    }
}