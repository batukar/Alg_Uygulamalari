#include <stdio.h>

int main(){
    long int userID = 1234567890;
    int password = 1234;

    long int inputUserID;
    int inputPassword;

    printf("Kullanici numaranizi girin: \n");
    scanf("%li", &inputUserID);

    if(inputUserID == userID){
        printf("Sifrenizi girin: \n");
        scanf("%d", &inputPassword);

        if(inputPassword == password){
            printf("Giris basarili!\nHos geldin, %li\n", userID);
        }else{
            printf("Sifre uyusmamaktadir!\n");
        }
    }else{
        printf("Kullanici ID uyusmamaktadir!\n");
    }

    return 0;
}