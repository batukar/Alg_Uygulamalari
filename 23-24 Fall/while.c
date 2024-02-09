#include <stdio.h>

int main(){
    int password = 1234;
    int input;
    int attempt = 3; // Giris hakki
    
    while (attempt > 0)
    {
        printf("Lutfen sifrenizi giriniz: ");
        scanf("%d", &input);

        if(input == password){
            printf("Hos geldiniz!\n");
            break; // basarili durumda donguden cikmak
        }else{
            attempt--;
            printf("Kalan giris hakkiniz: %d\n", attempt);
        }
    }
    
    if(attempt == 0){
        printf("Hesabiniz bloke olmustur.\n");
    }

}