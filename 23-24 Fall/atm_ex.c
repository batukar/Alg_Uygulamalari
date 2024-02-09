// Konsol ATM Uygulaması
// Örnek 1

#include <stdio.h>

int main(){
    int balance = 2000; // bakiye tutarı
    int result;
    int commission = 10; // %10 komisyon tutarı

    printf("********************************************\n");
    printf(" --- C ATM sine Hos Geldiniz ---\n");
    printf("Lutfen yapmak istediginiz islemi seciniz: \n");
    printf("1 - Bakiye Yukleme\n");
    printf("2 - Para Cekme\n");
    printf("3 - Para Transferi\n");
    printf("********************************************\n");

    int process1;
    scanf("%d", &process1);

    if(process1 == 1){
        //printf("bakiye yükleme ekranı");

        printf("Yuklemek istediginiz tutari giriniz: ");
        int push;
        scanf("%d", &push);

        if(push == 0){
            printf("Gecersiz miktar!");
        }else if(push %10 == 0){
            result = balance + push;
            printf("Yeni bakiyeniz : %d\n", result);
        }else if(push %10 != 0){
            printf("Girilen miktar 10'un kati olmalidir.");
        }else
            printf("Gecersiz islem");

    }else if(process1 == 2){
        //printf("para cekme ekranı");

    printf("Lutfen cekmek istediginiz tutari giriniz: ");
    int pull;
    scanf("%d", &pull);

    if(balance < pull){
        printf("Yetersiz bakiye!");
    }else if(pull == 0){
        printf("Gecersiz miktar!");
    }else{
        result = balance - pull;
        printf("Yeni bakiyeniz: %d}n", result);
    }
    }else if(process1 == 3){
        //printf("para transfer ekranı");

        printf("Transfer etmek istediginiz miktari giriniz: ");
        int amount;
        scanf("%d", &amount);

        if(balance < amount){
            printf("Yetersiz bakiye!");
        }else if(amount == 0){
            printf("Gecersiz islem");
        }else if(amount >= 1000){
            printf("Gunluk transfer limitiniz 999' dur.");
        }else{
            int temp;
            temp = amount / commission;
            result = balance - amount;
            result -= temp;

            printf("Yeni bakiyeniz : %d\n", result);
        }
    }else
        printf("Gecersiz islem");
    






}