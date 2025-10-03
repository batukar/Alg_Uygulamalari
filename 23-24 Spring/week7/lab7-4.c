// tampon dosya okuma ve yazma

#include <stdio.h>
#include <string.h>

int main(){
    FILE *okunacakDosya, *yazilacakDosya;

    char tampon[100];
    char okunacak[250] = "";
    char yazilacak[250] = "";

    char dosyaYolu[200] = "/Users/batukar/Documents/Github/Alg_Uygulamalari/23-24 Spring/week7/";
    char dosyaAdi[] = "dosya.txt";
    char yeniDosyaAdi[] = "yazilacak_dosya.txt";

    // okunacak dosya için
    strcat(okunacak, dosyaYolu);
    strcat(okunacak, dosyaAdi);

    // yazılacak dosya için
    strcat(yazilacak, dosyaYolu);
    strcat(yazilacak, yeniDosyaAdi);

    okunacakDosya = fopen(okunacak, "r");
    yazilacakDosya = fopen(yazilacak, "w");

    if(okunacakDosya == NULL || yazilacakDosya == NULL){
        printf("Dosyaya ulaşılamadı!");
        return 1;
    }

    while(fgets(tampon, sizeof(tampon), okunacakDosya) != NULL){
        fputs(tampon, yazilacakDosya);
    }

    fclose(okunacakDosya);
    fclose(yazilacakDosya);
}