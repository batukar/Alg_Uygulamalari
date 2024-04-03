// Renk örneği

#include <stdio.h>

union Color {
    struct{
        unsigned char red; // 0-255
        unsigned char green;
        unsigned char blue;
    } rgb;
    unsigned int hex; // 0-F (0-16 arasındaki sayılar için hexadecimal) // 16lık sayı sistemi
};

int main(){
    union Color renk;

    printf("RGB Değerleri (0-255): \n");
    printf("Kırmızı : ");
    scanf("%hhu", &renk.rgb.red); //hh char olduğu için, sonrasında gelen u ise işaretsiz bir char olduğu için
    printf("Yeşil :");
    scanf("%hhu", &renk.rgb.green);
    printf("Mavi :");
    scanf("%hhu", &renk.rgb.blue);

    printf("Hexadecimal (16lık sayı sistemi) değeri : #%X%X%X\n", renk.rgb.red, renk.rgb.green, renk.rgb.blue);

    // rgb to hex
}