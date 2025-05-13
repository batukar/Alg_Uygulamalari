// Dosya yazma
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");

    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    fprintf(file, "Merhaba! Dosya olusturuldu ve icine yazildi.\n");
    fclose(file);

    printf("Dosya basariyla olusturuldu ve yazildi!\n");
    return 0;
}