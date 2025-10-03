#include <stdio.h>

/*
1. Önceden kullanıcı ID (Okul numarası) ve şifre belirlensin.
2. Kullanıcıdan kullanıcı ID girilmesi istensin.
3. Önce kullanıcı ID kontrolü yapılsın,
4. Eğer kullanıcı ID uyuşmuyorsa, belirtsin ve programı direkt sonlandırsın.
5. Eğer kullanıcı ID uyuşuyorsa, şifre istensin.
6. Şifre doğru girilene kadar, kullanıcıdan şifre istensin.
7. Şifre doğru girildiyse, kullanıcıya bildirsin ve ID'sini yazdırsın.
8. Okul numarası yerine, TC kimlik no (11 haneli) için aynı işlem yapılması denensin.
*/

int main(){
    long long userID = 111; // 11 hane ve daha fazla haneli tamsayı tutmak için long long veti tipi
    int password = 1234;
    long long inputUserID;
    int inputPassword;
    int attempt = 3;

    printf("Kullanici ID'nizi girin: \n");
    scanf("%lld", &inputUserID);

    if(userID != inputUserID){ // değilse kontrolü. << Soru-> değilse (!=) yerine, eşit mi (==) kontrolü yapılır mıydı?
        printf("Verilen ID'ler uyusmamaktadir!");

        return 0; // programı bitirir - sonlandırır.
    }

    do{
        printf("Sifrenizi girin: \n");
        scanf("%d", &inputPassword);

        if(inputPassword == password){
            printf("Giris Basarili! Hos geldin, %lld", userID);
            break;
        }else{
            attempt--; // Giris hakki 1'er azaltildi.
            printf("Kalan giris hakkiniz: %d\n", attempt);
        }

    } while (attempt > 0);
    
    if(attempt == 0){ // Giris hakki 0'sa program durur.
        printf("Hesabiniz bloke olmustur.\n");
    }
    
    return 0;
}