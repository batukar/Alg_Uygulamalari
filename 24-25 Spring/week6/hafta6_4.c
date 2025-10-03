#include <stdio.h>
#include <string.h>

// Union tanımı: aynı veriyi farklı şekillerde yorumlayabiliriz
union Veri {
    int tamsayi;
    float ondalik;
    char karakterler[4];
};

int main() {
    union Veri veri;

    // Tamsayı olarak veri yaz
    veri.tamsayi = 16909060;

    printf("Tamsayi olarak: %d\n", veri.tamsayi);
    printf("Ondalik olarak: %f\n", veri.ondalik);
    printf("Karakterler: %c %c %c %c\n", 
            veri.karakterler[0], veri.karakterler[1],
            veri.karakterler[2], veri.karakterler[3]);

    printf("\nBellek adresi aynı: %p\n", (void*)&veri);

    return 0;
}