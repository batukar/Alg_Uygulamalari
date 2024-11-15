#include <stdio.h>

int main(){
    long long userID = 12345678901; // 11 hane ve daha fazla haneli tamsayı tutmak için long long veti tipi
    int password = 1234;
    long long inputUserID;
    int inputPassword;

    printf("Kullanici ID'nizi girin: \n");
    scanf("%lld", &inputUserID);

    if(userID != inputUserID){ // değilse kontrolü. << Soru-> değilse (!=) yerine, eşit mi (==) kontrolü yapılır mıydı?
        printf("Verilen ID'ler uyusmamaktadir!");

        return 0; // programı bitirir - sonlandırır.
    }

    printf("Sifrenizi girin: \n");
    scanf("%d", &inputPassword);

    while(password != inputPassword){ // değilse kontrolü. << Soru-> değilse (!=) yerine, eşit mi (==) kontrolü yapılır mıydı?
        printf("Sifreniz hatalidir! Tekrar deneyin: \n");

        scanf("%d", &inputPassword);
    }

    printf("Giris Basarili! Hos geldin, %lld", userID);
    
    return 0;
}