// Dosya kontrolü
#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r"); 

    if (file) {
        printf("Dosya mevcut!\n");
        fclose(file);
    } else {
        printf("Dosya bulunamadi!\n");
    }

    return 0;
}