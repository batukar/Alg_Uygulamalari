#include <stdio.h>

int main(){
    int a, b, c, d, e, toplam;

    a = 8;
    b = 11;
    c = -8;
    d = 20;
    e = 0;
    toplam = d + c;

    printf("%d + %d = %d\n", d, c, toplam); // toplam 12

    // toplam = toplam + b;
    toplam += b;

    printf("Yeni toplam = %d\n", toplam); // toplam 23

    int fark;

    fark = toplam - d;

    printf("%d - %d = %d\n", toplam, d, fark); // fark 3

}