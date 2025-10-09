#include <stdio.h>

int main(){
    int a, b;

    printf("Birinci sayiyi girin: \n");
    scanf("%d", &a);
    printf("Ikinci sayiyi girin: \n");
    scanf("%d", &b);

    int toplam = a + b;
    printf("Toplam: %d\n", toplam);

    int fark = a - b;
    printf("Fark: %d\n", fark);

    double carpim = (double)a * b;
    printf("Carpim: %.2lf\n", carpim);

}