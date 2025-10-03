#include <stdio.h>

int main(){
    int num1, num2;
    printf("ilk sayiyi girin: \n");
    scanf("%d", &num1);
    printf("ikinci sayiyi girin: \n");
    scanf("%d", &num2);

    //toplama
    int toplam = num1 + num2;
    printf("Toplam = %d\n", toplam);

    //cikarma
    int fark = num1 - num2;

    if(fark > 0){
        printf("Sonuc pozitiftir.\n");
        printf("Fark = %d\n", fark);
    }else if(fark == 0){
        printf("Sayi notrdur.\nSonuc 0'dir.\n");
    }else{
        printf("Sonuc negatiftir.\n");
        printf("Fark = %d\n", fark);
    }

    //carpma
    int carpim = num1 * num2;
    printf("Carpim = %d\n", carpim);

    //bolme --> CAST islemi
    float bolme = (float)num1 / num2;

    if(num2 != 0){
        printf("Bolum = %.2f\n", bolme);
    }else{
        printf("Bir sayinin 0'a bolumu tanimsizdir.\n");
    }

}