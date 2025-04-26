#include <stdio.h>

int main() {
    unsigned char veri = 0b11010110;  // 214
    unsigned char maske = 0b00001111; // Alt 4 biti almak için

    printf("Veri: %d\n", veri);  // 214
    printf("Maske: %d\n", maske);  // 15

    unsigned char sonuc = veri & maske;

    printf("Alt 4 bit: %d\n", sonuc);  // Sadece alt 4 bit → 6
    return 0;
}