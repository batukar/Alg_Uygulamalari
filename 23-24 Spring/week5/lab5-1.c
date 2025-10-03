#include <stdio.h>

int main() {
    int num = 10;
    int *ptr; 
    ptr = &num; // num değişkeninin adresini ptr ye ata

    printf("num değişkeninin değeri: %d\n", num);
    printf("num değişkeninin adresi: %p\n", &num);
    printf("ptr'nin değeri: %p\n", ptr); // num değişkeninin adresi
    printf("ptr'nin gösterdiği değer: %d\n", *ptr); 

    *ptr = 20; 
    printf("num değişkeninin yeni değeri: %d\n", num); 

    return 0;
}