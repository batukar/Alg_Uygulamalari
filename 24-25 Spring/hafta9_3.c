// Rastgele okuma
#include <stdio.h>

int main() {
    FILE *file = fopen("data.txt", "r");
    char ch;

    if (file == NULL) {
        printf("Dosya bulunamadı!\n");
        return 1;
    }

    // Başlangıç pozisyonunu göster
    printf("Başlangıç pozisyonu: %ld\n", ftell(file));

    // Dosyada 10. bayta git
    fseek(file, 10, SEEK_SET);
    ch = fgetc(file);
    printf("10. bayttan karakter: %c\n", ch);

    // Mevcut pozisyonu göster
    printf("Mevcut pozisyon: %ld\n", ftell(file));

    fclose(file);
    return 0;
}