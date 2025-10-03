// dosyaya yazma 

#include <stdio.h>
#include <string.h>

int main(){
    FILE *dosya;

    char dosyaYolu[200] = "/Users/batukar/Documents/Github/Alg_Uygulamalari/23-24 Spring/week7/";
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