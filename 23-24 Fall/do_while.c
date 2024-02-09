#include <stdio.h>

int main(){
    int password = 1234;
    int input;
    int attempt = 3; // Giris hakki

    do
    {
       printf("Lutfen sifrenizi giriniz: ");
       scanf("%d", &input);

       if(input == password){
        printf("Hos geldiniz!\n");
        break; // sart degil, buradea kullanimi daha dogru 
       }else{
        attempt--;
        printf("Kalan giris hakkiniz : %d\n", attempt);
       }
    } while (attempt > 0);

    if(attempt == 0){
        printf("Hesabiniz bloke olmustur.\n");
    }

}