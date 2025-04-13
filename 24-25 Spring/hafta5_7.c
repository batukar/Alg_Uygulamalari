#include <stdio.h>

int main() {
    char metin[100];
    int sayac = 0;

    printf("Metin girin: ");
    fgets(metin, sizeof(metin), stdin);

    for (int i = 0; metin[i] != '\0'; i++) {
        if (metin[i] == 'a' || metin[i] == 'A') {
            sayac++;
        }
    }

    printf("'a' harfi sayisi: %d\n", sayac);
    return 0;
}