// ölçü birimleri

#include <stdio.h>

union Length{
    float metre;
    float santimetre;
};

int main(){
    union Length uzunluk;
    char unit;

    printf("Uzunluk girin: ");
    scanf("%f", &uzunluk.metre);
    printf("Birim seçin (Metre için m/M , Santimetre için s/S): ");
    scanf(" %c", &unit); // ?

    if(unit == 'm' || unit == 'M'){
        printf("Metre cinsinden uzunluk: %.2f m\n", uzunluk.metre);
    } else if(unit == 's' || unit == 'S'){
        printf("Santimetre cinsinden uzunluk: %.2f cm\n", uzunluk.santimetre = uzunluk.metre * 100);   
    } else{
        printf("Geçersiz birim!\n");
    }
    
}