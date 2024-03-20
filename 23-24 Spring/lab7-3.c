// dosyaya yazma 

#include <stdio.h>
#include <string.h>

int main(){
    FILE *dosya;

    char dosyaYolu[200] = "/Users/batukar/Documents/iste/Bilgisayar Mühendisliği/2023-2024/Bahar/Dersler/Programlama/";
    char dosyaAdi[] = "dosya.txt";

    strcat(dosyaYolu, dosyaAdi);

    dosya = fopen(dosyaYolu, "w");

    if(dosya == NULL){
        printf("Dosyaya ulaşılamadı!");
        return 1;
    }

    fprintf(dosya, "Bu bir test mesajıdır!");

    fclose(dosya);

}