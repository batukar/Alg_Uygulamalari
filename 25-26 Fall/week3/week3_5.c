#include <stdio.h>

int main(){
    int sayi;

    printf("1-7 arasinda bir sayi girin: \n");
    scanf("%d", &sayi);

    switch (sayi){
    case 1:
        printf("Pazartesi\n");
        break;
    case 2:
        printf("Sali\n");
        break;
    case 3:
        printf("Carsamba\n");
    case 4:
        printf("Persembe\n");
    case 5:
        printf("Cuma\n");
        break;
    case 6:
        printf("Cumartesi\n");
        break;
    case 7:
        printf("Pazar\n");
        break;
    default:
        printf("Hatali giris yapildi.\n ");
        break;
    }
}