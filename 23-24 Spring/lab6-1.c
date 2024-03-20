#include <stdio.h>
#include <string.h>

int main(){
    char username[20] = "";
    char password[20] = ""; 

    printf("Lütfen kullanıcı adınızı giriniz : ");
    scanf("%s", &username);

    printf("Şifrenizi giriniz : ");
    scanf("%s", &password);

    size_t passSize = strlen(&password);

    if (passSize <= 7)
    {
        printf("Şifreniz 8 karakterden daha fazla karakter içermelidir.");
    }else{
        printf("Kaydınız başarılı bir şekilde oluşturuldu.");
    }

}