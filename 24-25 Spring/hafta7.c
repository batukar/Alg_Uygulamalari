#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Global degiskenler
int rnd1, rnd2, result;

// Fonksiyon prototipleri
int createRnd();
int logicAND(int x, int y);
int logicOR(int x, int y);

int main(){
    srand(time(NULL));

    rnd1 = createRnd();
    rnd2 = createRnd();

    // Rastgele üretilen iki sayinin ayni olmamasi kontrolu
    if (rnd1 == rnd2){
        rnd2 = createRnd();
    }

    printf("Rastgele sayi1 = %d\n", rnd1);
    printf("Rastgele sayi2 = %d\n", rnd2);

    int and = logicAND(rnd1, rnd2);
    printf("%d & %d = %d\n", rnd1, rnd2, and);

    int or = logicOR(rnd1, rnd2);
    printf("%d | %d = %d\n", rnd1, rnd2, or);

    // ilk sayinin NOT degerini bulma
    int rnd1NOT = ~rnd1; // tilda -> alt - ü

    printf("Rastgele sayinin NOT degeri = %d\n", rnd1NOT);

    int or2 = logicOR(rnd1NOT, rnd2);

    printf("%d | %d = %d\n", rnd1NOT, rnd2, or2);


    int num1 = 3;
    int num2 = 6;

    printf("num1 = %d\nnum2 = %d\n", num1, num2);

    // ilk sayiyi 3 birim saga kaydirma
    int yeni1 = num1 >> 3;
    printf("3 birim saga kaydirilan yeni sayinin degeri = %d\n", yeni1);
    
    // ikinci sayiyi 2 birim sola kaydirma
    int yeni2 = num2 << 2;
    printf("2 birim sola kaydirilan yeni sayinin degeri = %d\n", yeni2);
}

int createRnd(){
    int x = rand() % 15;

    return x;
}

int logicAND(int x, int y){
    result = x & y;

    return result;
}

int logicOR(int x, int y){
    result = x | y;

    return result;
}


