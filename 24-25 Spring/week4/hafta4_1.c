#include <stdio.h>

int main() {
    int sayi = 42;
    int *ptr = &sayi;

    printf("Sayi: %d\n", sayi);
    printf("Adres: %p\n", &sayi);
    printf("Pointer ile adres: %p\n", ptr);
    printf("Pointer ile deger: %d\n", *ptr);

    return 0;
}