#include <stdio.h>

int main(){
    int sayi1, sayi2;
    printf("Birinci sayiyi girin: \n");
    scanf("%d", &sayi1);

    printf("İkinci sayiyi girin: \n");
    scanf("%d", &sayi2);

    int sonuc = sayi1 * sayi2;
    // sayi1 *= sayi2; // sayi1 = sayi1 * sayi2;

    printf("Girilen iki sayinin carpimi = %d\n", sonuc);
}