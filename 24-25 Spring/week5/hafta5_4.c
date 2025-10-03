#include <stdio.h>

int main() {
    char cumle[100];
    int sayac = 0;

    printf("Bir cumle girin: ");
    fgets(cumle, sizeof(cumle), stdin);

    for (int i = 0; cumle[i] != '\0'; i++) {
        if (cumle[i] == ' ') {
            sayac++;
        }
    }

    printf("Bosluk sayisi: %d\n", sayac);
    return 0;
}