#include <stdio.h>

int main() {
    int sayi = 25;
    int *ptr = &sayi;
    int **pptr = &ptr;

    printf("Deger: %d\n", sayi);
    printf("Pointer ile: %d\n", *ptr);
    printf("Double pointer ile: %d\n", **pptr);

    printf("Adres: %p\n", &sayi);
    printf("Pointer ile adres: %p\n", ptr);
    printf("Double pointer ile adres: %p\n", *pptr);

    return 0;
}