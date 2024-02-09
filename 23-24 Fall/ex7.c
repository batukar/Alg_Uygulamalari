// hesap makinesi

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// global degiskenler
int number = 0; 
int result = 0;

int input(){ // kullanici girisleri icin gerekli fonksiyon
    scanf("%d", &number);
    return number;
}

int sum(int x, int y){ // toplama fonksiyonu
    return result = x + y;
}

int sub(int x, int y) { // cikarma fonksiyonu
    if(x > y){ // 1. sayi 2. sayidan buyuk ise
        return result = x - y;
    }else // 2. sayi 1. sayidan buyuk ise
        return result = y - x;
}

int times(int x, int y){ // carpma fonksiyonu
    return result = x * y;
}

int divide(int x, int y){ // bolme fonksiyonu
    if(x > y){
        return result = x / y; 
    } else
        return result = y / x; 
}

void errorMessage(){
    printf("Hatali İslem\n");
}

void selecting(int number1, int number2){

    while (number != 5)
    {
        printf("\nYapmak istediginiz islemi seciniz: \n");
        printf("1- Toplama İslemi\n2- Cikarma İslemi\n3- Carpma İslemi\n4- Bolme İslemi\n5- Cikis\n");
        
        int selection = input();

        switch (selection)
        {
        case 1:
            printf("Sonuc = %d\n", sum(number1, number2)); // toplama
            break;
        case 2:
            printf("Sonuc = %d\n", sub(number1, number2)); // cikarma
            break;
        case 3: 
            printf("Sonuc = %d\n", times(number1, number2)); // carpma
            break;
        case 4: 
            printf("Sonuc = %d\n", divide(number1, number2)); // bolme
            break;
        case 5: 
            printf("Program Sonlandi.");
            break;
        default:
            errorMessage();
            break;
        }
    }
}

int randomNumberGenerator(){ // rastgele sayi uretmeyi saglayan bir fonksiyon
    number = rand() % 100 + 1; // 0-99 arasinda sayi uretir // "+1" ile 1-100 arasinda rastgele sayi uretir
    printf("%d\n", number);
    return number;
}


int main(){
    // scope = kapsam
    srand(time(NULL)); // cekirdekteki zamani sifirlamak ve her seferinde birbirinden farklı sayi uretmek icin

    // printf("ilk sayiyi girin: ");
    // int first = input();
    // printf("ikinci sayiyi girin: ");
    // int second = input();

    int first = randomNumberGenerator();
    int second = randomNumberGenerator();

    selecting(first, second);

}