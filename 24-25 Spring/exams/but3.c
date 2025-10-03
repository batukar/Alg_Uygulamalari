#include <stdio.h>

// Sayıyı ikili yazdırmak için fonksiyon
void printBinary(unsigned char n) {
    for (int i = 7; i >= 0; i--) {
        printf("%d", (n >> i) & 1);
    }
    printf("\n");
}

int main() {
    unsigned char sayi;
    printf("Bir sayi giriniz (0–255): ");
    scanf("%hhu", &sayi);

    printf("Binary: ");
    printBinary(sayi);

    // 3. bit kontrolü (bit 3 = 2^3 = 8)
    if ((sayi & (1 << 3)) != 0) {
        printf("3. bit: Acik\n");
    } else {
        printf("3. bit: Kapali\n");
        sayi = sayi | (1 << 3);  // 3. biti aç
        printf("Yeni sayi: %d\n", sayi);
        printf("Yeni Binary: ");
        printBinary(sayi);
    }

    return 0;
}