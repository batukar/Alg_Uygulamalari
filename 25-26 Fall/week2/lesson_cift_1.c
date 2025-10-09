#include <stdio.h>

int main(){
    int a, b, c, d, e;

    a = 7;
    b = 13;
    c = 27;
    d = -9;
    e = 0;

    int toplam = b + c;
    printf("%d + %d = %d\n", b, c, toplam); //40

    // toplam = toplam + d; //31
    toplam += d;
    printf("Yeni toplam = %d\n", toplam);

    int fark = toplam - c;
    printf("Fark = %d\n", fark); // 4
}