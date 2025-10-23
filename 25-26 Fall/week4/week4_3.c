#include <stdio.h>

int main(){
    long int userID = 1234567890;
    int password = 1234;

    long int inputUserID;
    int inputPassword;

    while(1){
        printf("Kullanici numaranizi girin: \n");
        scanf("%li", &inputUserID);

        if(inputUserID != userID){
            printf("ID uyusmuyor! Tekrar deneyin!\n");
            continue;
        }else{
            printf("Sifrenizi girin: \n");
            scanf("%d", &inputPassword);

            if(inputPassword != password){
                printf("Sifre hatali! Tekrar deneyin!\n");
                continue;
            }else{
                printf("Giris basarili!\nHos geldiniz, %li\n", userID);
                break;
            }
        }
    }

    return 0;
}