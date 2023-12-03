#include <stdio.h>

int main(){
    int ogrNO; // Degisken tanimlandi
    printf("öğrenci numarasını giriniz: "); // Kullaniciya konsol uyarisi verildi
    scanf("%d", &ogrNO); // Kullanicidan deger alindi.

    if(ogrNO %2 == 0){ // Deger kontrol edildi.
        printf("Batuhan %d\n", ogrNO); // Deger çiftse ekrana yazildi.
    }else
        printf("Karadag %d\n", ogrNO); // Deger tekse ekrana yazildi.
}