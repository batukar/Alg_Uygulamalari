#include <stdio.h>

int main(){
    long int userID = 1234567890;
    int password = 1234;

    long int inputUserID;
    int inputPassword;

    int attempt = 3;

    do{
        printf("Kullanici ID girin: \n");
        scanf("%li", &inputUserID);
        
        if (inputUserID != userID){
            printf("Kullanici bulunamadi!\n");
            attempt--;
            if (attempt == 0){
                printf("Bloke edildiniz!\n");
            }else{
                printf("Deneme sansi: %d\n", attempt);
            }
        }else{
            do{
                printf("Sifre girin: \n");
                scanf("%d", &inputPassword);

                if (password != inputPassword){
                    printf("Sifre hatali!\n");

                    attempt--;
                    if (attempt == 0){
                    printf("Bloke edildiniz!\n");
                    }else{
                        printf("Deneme sansi: %d\n", attempt);
                    }
                }else{
                    printf("Hos geldin, %li\n", userID);
                    break;
                }
            } while (attempt);
        }
        break;
    } while (attempt > 0);
    
}