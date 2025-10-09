#include <stdio.h>

int main(){
    int sayi1, sayi2;
    printf("Birinci sayiyi girin: \n");
    scanf("%d", &sayi1);

    printf("İkinci sayiyi girin: \n");
    scanf("%d", &sayi1);

    printf("Ucuncu sayiyi girin: \n");
    scanf("%d", &sayi2);

    int sonuc = sayi1 * sayi2;
    printf("Sonuc = %d\n", sonuc);
}