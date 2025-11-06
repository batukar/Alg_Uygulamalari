#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//Slot uygulamasi revize edilmis hali iki oyuncu icinden verilen bakiyelerden dusulerek kimin kazandýðýný 
//belirleyen program
int o1Bakiye, o2Bakiye, oyuncuBakiyesi;

int a, b, c;

int oyun();
int yazdir(int oyuncuNumarasi, int bakiye);

int main() {
    srand(time(NULL));

    printf("Oyuncu Bakiyesini Giriniz: ");
    scanf("%d", &oyuncuBakiyesi);

    o1Bakiye = oyuncuBakiyesi;
    o2Bakiye = oyuncuBakiyesi;

    while (o1Bakiye > 0 && o2Bakiye > 0) {
        printf("\n**\n");

        oyun();
        if (a == b && b == c) {
            o1Bakiye += o2Bakiye;
            printf("Oyuncu 1 Kazandi! ");
            yazdir(1, o1Bakiye);
            o2Bakiye = 0;
        } else {
            o1Bakiye--;
            yazdir(1, o1Bakiye);
        }

        oyun();
        if (a == b && b == c) {
            o2Bakiye += o1Bakiye;
            printf("Oyuncu 2 Kazandi! ");
            yazdir(2, o2Bakiye);
            o1Bakiye = 0;
        } else {
            o2Bakiye--;
            yazdir(2, o2Bakiye);
        }
    }

    if (o1Bakiye <= 0) {
        printf("\nOyuncu 1 elendi! Oyuncu 2 kazandi!\n");
    } else if (o2Bakiye <= 0) {
        printf("\nOyuncu 2 elendi! Oyuncu 1 kazandi!\n");
    }

    return 0;
}

int yazdir(int oyuncuNumarasi, int bakiye) {
    printf("%d %d %d: Oyuncu %d Bakiyesi: %d\n", a, b, c, oyuncuNumarasi, bakiye);
    return 0;
}

int oyun() {
    a = rand() % 3;
    b = rand() % 3;
    c = rand() % 3;
    return 0;
}
