#include <stdio.h> // c nin standart giriş/çıkış kütüphanesi (input/output)

int main(){
    // printf("Acelya\n");
    // integer (tamsayi) kisaltmasi int
    int a = 5;
    int b = 10;
    int sonuc = a + b;
    printf("%d + %d = %d\n", a, b, sonuc); // %d -> decimal (onluk) tamsayi

    a = 16;
    sonuc = b - a;
    printf("%d - %d = %d\n", b, a, sonuc);

    int yeniSonuc = sonuc * b;


    printf("%d * %d = %d\n", sonuc, b, yeniSonuc);


    return 0;
}