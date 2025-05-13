#include <stdio.h>
#include <stdlib.h>

// fonksiyon prototipleri
int fileControl(); 
void fileCreate();
void fileRead();
void fileWrite();
void fileRemove();

char fileName[20] = "output.txt";

int main() {
    int choice;
    printf("Dosya ismini girin: ");
    scanf("%s", fileName);

    while (1) {
        printf("\n----- DOSYA YONETIMI -----\n");
        printf("1. Dosya Kontrol\n");
        printf("2. Dosya Olustur\n");
        printf("3. Dosyaya Yaz\n");
        printf("4. Dosyayi Oku\n");
        printf("5. Dosyayi Sil\n");
        printf("6. Cikis\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                fileControl();
                break;
            case 2:
                fileCreate();
                break;
            case 3:
                fileWrite();
                break;
            case 4:
                fileRead();
                break;
            case 5:
                fileRemove();
                break;
            case 6:
                printf("Cikis yapiliyor...\n");
                exit(0);
            default:
                printf("Gecersiz secim!\n");
        }
    }

    return 0;
}

int fileControl() {
    FILE *file = fopen(fileName, "r");

    if (file) {
        fclose(file);
        printf("Dosya mevcut: %s\n", fileName);
        return 1; // Dosya mevcut
    } else {
        printf("Dosya bulunamadi: %s\n", fileName);
        return 0; // Dosya mevcut değil
    }
}

void fileCreate() {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Dosya olusturulamadi!\n");
        return;
    }

    fprintf(file, "Merhaba! Dosya olusturuldu ve icine yazildi.\n");
    fclose(file);
    printf("Dosya basariyla olusturuldu ve yazildi!\n");
}

void fileRead() {
    if (!fileControl()) {
        printf("Dosya bulunamadi! Okuma islemi basarisiz.\n");
        return;
    }

    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return;
    }

    char line[100];
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    printf("Dosya okundu!\n");
}

void fileWrite() {
    if (!fileControl()) {
        printf("Dosya bulunamadi! Yazma islemi basarisiz.\n");
        return;
    }

    FILE *file = fopen(fileName, "a");
    if (file == NULL) {
        printf("Dosya acilamadi!\n");
        return;
    }

    int num;
    for (int i = 1; i <= 5; i++) {
        printf("Bir sayi girin: ");
        scanf("%d", &num);
        fprintf(file, "%d\n", num);
    }

    fclose(file);
    printf("Sayilar dosyaya yazildi!\n");
}

void fileRemove() {
    if (!fileControl()) {
        printf("Dosya bulunamadi! Silme islemi basarisiz.\n");
        return;
    }

    if (remove(fileName) == 0) {
        printf("Dosya basariyla silindi!\n");
    } else {
        printf("Dosya silinemedi!\n");
    }
}