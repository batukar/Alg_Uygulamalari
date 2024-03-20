// dosya okuma

#include <stdio.h>
#include <string.h>

int main(){
    FILE *dosya;
    char karakter;

    char dosyaYolu[200] = "/Users/batukar/Documents/iste/Bilgisayar Mühendisliği/2023-2024/Bahar/Dersler/Programlama/";
    char dosyaAdi[] = "dosya.txt";
    
    strcat(dosyaYolu, dosyaAdi);

    dosya = fopen(dosyaYolu, "r");

    if(dosya == NULL){
        printf("Dosyaya ulaşılamadı!");
        return 1;
    }

    while ((karakter = fgetc(dosya)) != EOF) // ASCII
    {
        printf("%c", karakter);
    }

    fclose(dosya);

}
