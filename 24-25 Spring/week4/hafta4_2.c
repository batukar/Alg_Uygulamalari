#include <stdio.h>

void degeriDegistir(int *ptr);

int main() {
    int x = 10;
    printf("Deger: %d\n", x);
    degeriDegistir(&x);
    printf("Yeni deger: %d\n", x);
    return 0;
}

void degeriDegistir(int *ptr) {
    *ptr = 99;
}