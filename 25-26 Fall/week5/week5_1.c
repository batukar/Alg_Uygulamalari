#include <stdio.h>

int main(){
    // daha onceden tanimli uyelik bilgileri
    long int userID = 12345;
    int password = 1234;

    // kullanicidan alinacak bilgiler
    long int inputUserID;
    int inputPassword;

    // giris hakki
    int attempt = 3;

    while(attempt > 0){
        printf("Kullanici ID girin: \n");
        scanf("%li", &inputUserID);
        if (userID != inputUserID){
            printf("Kullanici bulunamadi!\n");
            attempt--;

            if (attempt != 0) printf("Kalan deneme hakki: %d\n", attempt); 
            else{
                printf("Deneme hakkiniz kalmamistir!\n");
                break;
            }
        }else{
            printf("Sifre girin: \n");
            scanf("%d", &inputPassword);
            if (password != inputPassword){
                printf("Sifre yanlis!\n");
                attempt--;
                if (attempt != 0) printf("Kalan deneme hakki: %d\n", attempt);
                else{
                    printf("Deneme hakkiniz kalmamistir!\n");
                    break;
                }
            }else{
                printf("Hos geldin, %li\n", userID);
                break;
            }
        }
    }
}