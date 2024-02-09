#include <stdio.h>

int main(){
    int ogrNO; // Degisken tanimlandi
    char ad[20];
    char soyad[20];

    printf("adinizi girin: "); // Kullaniciya konsol uyarisi verildi
    scanf("%s", &ad); // Kullanicidan ad alindi.

    printf("soyadinizi girin: "); // Kullaniciya konsol uyarisi verildi
    scanf("%s", &soyad); // Kullanicidan soyad alindi.

    printf("öğrenci numarasını giriniz: "); // Kullaniciya konsol uyarisi verildi
    scanf("%d", &ogrNO); // Kullanicidan deger alindi.

    if(ogrNO %2 == 0){ // Deger kontrol edildi.
        printf("%s %d\n", ad, ogrNO); // Deger çiftse ekrana yazildi.
    }else
        printf("%s %d\n", soyad, ogrNO); // Deger tekse ekrana yazildi.
}