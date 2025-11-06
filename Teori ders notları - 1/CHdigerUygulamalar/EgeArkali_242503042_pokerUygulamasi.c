#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//oyuncuya 2 kart, ortaya 5 kart verilerek poker kombinasyonu olarak 
//karsilastirip oyuncunun elindeki kombinasyonu yazdiran program
int kartsecim() {
    return rand() % 13 + 1;
}

enum sekil {
    KARO,
    KUPA,
    SINEK,
    MACA,
    KART
};

enum sekil rastgelesekilsecim() {
    return rand() % KART;
}

int main() {
    srand(time(NULL));
    enum sekil oyuncukart1 = rastgelesekilsecim();
    enum sekil oyuncukart2 = rastgelesekilsecim();
    int oyuncusayi1 = kartsecim();
    int oyuncusayi2 = kartsecim();
    printf("Elinizde ");
    switch (oyuncukart1) {
        case KARO: printf("Karo %d ", oyuncusayi1); break;
        case KUPA: printf("Kupa %d ", oyuncusayi1); break;
        case SINEK: printf("Sinek %d ", oyuncusayi1); break;
        case MACA: printf("Maca %d ", oyuncusayi1); break;
    }
    printf("ve ");
    switch (oyuncukart2) {
        case KARO: printf("Karo %d,\n", oyuncusayi2); break;
        case KUPA: printf("Kupa %d,\n", oyuncusayi2); break;
        case SINEK: printf("Sinek %d,\n", oyuncusayi2); break;
        case MACA: printf("Maca %d,\n", oyuncusayi2); break;
    }

    enum sekil ortakart1 = rastgelesekilsecim();
    int ortasayi1 = kartsecim();
    enum sekil ortakart2 = rastgelesekilsecim();
    int ortasayi2 = kartsecim();
    enum sekil ortakart3 = rastgelesekilsecim();
    int ortasayi3 = kartsecim();
    enum sekil ortakart4 = rastgelesekilsecim();
    int ortasayi4 = kartsecim();
    enum sekil ortakart5 = rastgelesekilsecim();
    int ortasayi5 = kartsecim();
    printf("Ortada ");
    switch (ortakart1) {
        case KARO: printf("Karo %d, ", ortasayi1); break;
        case KUPA: printf("Kupa %d, ", ortasayi1); break;
        case SINEK: printf("Sinek %d, ", ortasayi1); break;
        case MACA: printf("Maca %d, ", ortasayi1); break;
    }
    switch (ortakart2) {
        case KARO: printf("Karo %d, ", ortasayi2); break;
        case KUPA: printf("Kupa %d, ", ortasayi2); break;
        case SINEK: printf("Sinek %d, ", ortasayi2); break;
        case MACA: printf("Maca %d, ", ortasayi2); break;
    }
    switch (ortakart3) {
        case KARO: printf("Karo %d, ", ortasayi3); break;
        case KUPA: printf("Kupa %d, ", ortasayi3); break;
        case SINEK: printf("Sinek %d, ", ortasayi3); break;
        case MACA: printf("Maca %d, ", ortasayi3); break;
    }
    switch (ortakart4) {
        case KARO: printf("Karo %d, ", ortasayi4); break;
        case KUPA: printf("Kupa %d, ", ortasayi4); break;
        case SINEK: printf("Sinek %d, ", ortasayi4); break;
        case MACA: printf("Maca %d, ", ortasayi4); break;
    }
    switch (ortakart5) {
        case KARO: printf("Karo %d var.\n", ortasayi5); break;
        case KUPA: printf("Kupa %d var.\n", ortasayi5); break;
        case SINEK: printf("Sinek %d var.\n", ortasayi5); break;
        case MACA: printf("Maca %d var.\n", ortasayi5); break;
    }
    int cift = 0;
    int karo = 0, kupa = 0, sinek = 0, maca = 0;

    if (oyuncusayi1 == oyuncusayi2) cift++;
    if (oyuncusayi1 == ortasayi1) cift++;
    if (oyuncusayi1 == ortasayi2) cift++;
    if (oyuncusayi1 == ortasayi3) cift++;
    if (oyuncusayi1 == ortasayi4) cift++;
    if (oyuncusayi1 == ortasayi5) cift++;
    if (oyuncusayi2 == ortasayi1) cift++;
    if (oyuncusayi2 == ortasayi2) cift++;
    if (oyuncusayi2 == ortasayi3) cift++;
    if (oyuncusayi2 == ortasayi4) cift++;
    if (oyuncusayi2 == ortasayi5) cift++;
    if (ortasayi1 == ortasayi2) cift++;
    if (ortasayi1 == ortasayi3) cift++;
    if (ortasayi1 == ortasayi4) cift++;
    if (ortasayi1 == ortasayi5) cift++;
    if (ortasayi2 == ortasayi3) cift++;
    if (ortasayi2 == ortasayi4) cift++;
    if (ortasayi2 == ortasayi5) cift++;
    if (ortasayi3 == ortasayi4) cift++;
    if (ortasayi3 == ortasayi5) cift++;
    if (ortasayi4 == ortasayi5) cift++;

    if (oyuncukart1 == KARO) karo++;
    if (oyuncukart2 == KARO) karo++;
    if (ortakart1 == KARO) karo++;
    if (ortakart2 == KARO) karo++;
    if (ortakart3 == KARO) karo++;
    if (ortakart4 == KARO) karo++;
    if (ortakart5 == KARO) karo++;

    if (oyuncukart1 == KUPA) kupa++;
    if (oyuncukart2 == KUPA) kupa++;
    if (ortakart1 == KUPA) kupa++;
    if (ortakart2 == KUPA) kupa++;
    if (ortakart3 == KUPA) kupa++;
    if (ortakart4 == KUPA) kupa++;
    if (ortakart5 == KUPA) kupa++;

    if (oyuncukart1 == SINEK) sinek++;
    if (oyuncukart2 == SINEK) sinek++;
    if (ortakart1 == SINEK) sinek++;
    if (ortakart2 == SINEK) sinek++;
    if (ortakart3 == SINEK) sinek++;
    if (ortakart4 == SINEK) sinek++;
    if (ortakart5 == SINEK) sinek++;

    if (oyuncukart1 == MACA) maca++;
    if (oyuncukart2 == MACA) maca++;
    if (ortakart1 == MACA) maca++;
    if (ortakart2 == MACA) maca++;
    if (ortakart3 == MACA) maca++;
    if (ortakart4 == MACA) maca++;
    if (ortakart5 == MACA) maca++;

    if (cift >= 2) {
        printf("Elinizde Iki Cift var!(Doper)\n");
    } else if (cift == 1) {
        printf("Elinizde Bir Cift var! (Per)\n");
    } else {
        printf("Eliniz Yuksek Kart.\n");
    }

    if (karo >= 5) {
        printf("Elinizde Flush (Karo) var!\n");
    } else if (kupa >= 5) {
        printf("Elinizde Flush (Kupa) var!\n");
    } else if (sinek >= 5) {
        printf("Elinizde Flush (Sinek) var!\n");
    } else if (maca >= 5) {
        printf("Elinizde Flush (Maca) var!\n");
    }
}
