#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "w"); 
    int num;

    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    for (int i = 1; i <= 5; i++) {
        printf("Bir sayi girin: ");
        scanf("%d", &num);
        fprintf(file, "%d\n", num); // Dosyaya yaz
    }

    fclose(file); // Dosyayı kapat
    printf("Sayilar dosyaya yazildi!\n");

    // Dosyadan okuma
    file = fopen("numbers.txt", "r"); // Okuma modunda aç
    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return 1;
    }

    printf("\nDosyadan okunan sayilar:\n");
    while (fscanf(file, "%d", &num) != EOF) { // Sayı okuma
        printf("%d\n", num); // Ekrana yazdır
    }

    fclose(file); // Dosyayı kapat
    return 0;
}