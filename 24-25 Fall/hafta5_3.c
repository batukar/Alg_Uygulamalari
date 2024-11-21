#include <stdio.h>

int main(){
    int num1, num2, choise;
    int toplam, fark, carpim;
    float bolme;
    printf("ilk sayiyi girin: \n");
    scanf("%d", &num1);
    printf("ikinci sayiyi girin: \n");
    scanf("%d", &num2);
    
    printf("*********************************\n");
    printf("1- Toplama\n");
    printf("2- Cikarma\n");
    printf("3- Carpma\n");
    printf("4- Bolme\n");
    printf("Yapmak istediginiz islemi secin: \n");
    printf("*********************************\n");
    scanf("%d", &choise);

    switch (choise)
    {
    case 1: // toplama
        toplam = num1 + num2;
        printf("Toplam = %d\n", toplam);
        break;
    case 2: // Cikarma
        fark = num1 - num2;

        if(fark > 0){
            printf("Sonuc pozitiftir.\n");
            printf("Fark = %d\n", fark);
        }else if(fark == 0){
            printf("Sayi notrdur.\nSonuc 0'dir.\n");
        }else{
            printf("Sonuc negatiftir.\n");
            printf("Fark = %d\n", fark);
        }
        break;
    case 3: // Carpma
        carpim = num1 * num2;
        printf("Carpim = %d\n", carpim);
        break;
    case 4: // Bolme
        bolme = (float)num1 / num2;

        if(num2 != 0){
            printf("Bolum = %.2f\n", bolme);
        }else{
            printf("Bir sayinin 0'a bolumu tanimsizdir.\n");
        }
        break;
    default:
        printf("Hatali secim yaptiniz.\n");
        break;
    }

}