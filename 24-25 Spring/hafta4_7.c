#include <stdio.h>

void ayirTekCift(int *dizi, int boyut);

int main() {
    int dizi[] = {4, 7, 2, 9, 6, 1};
    int boyut = sizeof(dizi) / sizeof(dizi[0]); // dizinin eleman sayisi

    printf("%d\n", sizeof(dizi));
    printf("%d\n", sizeof(dizi[0]));

    ayirTekCift(dizi, boyut);
    return 0;
}

void ayirTekCift(int *dizi, int boyut) {
    printf("Ciftler: ");
    for (int i = 0; i < boyut; i++) {
        if (*(dizi + i) % 2 == 0)
            printf("%d ", *(dizi + i));
    }

    printf("\nTekler: ");
    for (int i = 0; i < boyut; i++) {
        if (*(dizi + i) % 2 != 0)
            printf("%d ", *(dizi + i));
    }
    printf("\n");
}