#include <stdio.h>
#include <string.h> 

// global diziler
char username[100] = "batuhan";
char password[100] = "12345";

char inp_username[100];
char inp_password[100];

// girdi alan fonksiyonlar
void inputUsername(char array[]); 
void inputPassword(char array[]);
void input(char array[], void (*inputFonk)(char array[])); //
int uzunlukBul(char array[]);
void kontrol(char name[], char pass[]);

int main(){
    input(inp_username, inputUsername);
    input(inp_password, inputPassword);

    // printf("Kullanici adiniz: %s\n", inp_username);
    // printf("Sifreniz: %s\n", inp_password);

    // int nameUzunluk = uzunlukBul(username);
    // printf("Kullanici adinin uzunlugu = %d\n", nameUzunluk);

    kontrol(inp_username, inp_password);
}

void inputUsername(char array[]){
    printf("Kullanici adinizi girin: \n");
    scanf("%s", array);
}

void inputPassword(char array[]){
    printf("Sifrenizi girin: \n");
    scanf("%s", array);

    // Sifre uzunluk kontrolü
    if (uzunlukBul(array) < 4){
        printf("Sifreniz 4 karakterden uzun olmalidir!\n");
        inputPassword(array);
    } else if(uzunlukBul(array) > 8){
        printf("Sifreniz 8 karakterden az olmalidir!\n");
        input(array, inputPassword); // ==== inputPassword(array)
    } else if(uzunlukBul(array) == 0 && array[0] == '\0'){
        printf("Sifreniz bos olmamalidir!\n");
        inputPassword(array);
    }
}

void input(char array[], void (*inputFonk)(char array[])){ // alias = takma ad
    inputFonk(array);
}

int uzunlukBul(char array[]){
    int count = 0;

    for (int i = 0; array[i] != '\0'; i++){
        count++;
    }

    return count;
}

void kontrol(char name[], char pass[]){
    if (strcmp(username, name) != 0 || strcmp(password, pass) != 0){
        printf("Giris basarisiz!\n");
    }else{
        printf("Giris basarili! Hos geldin, %s\n", username);
    }
}
