#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILE_NAME "database.dat"

struct Record {
    int id;
    char name[50];
    float value;
};

void menu();
void createFile();
void addRecord();
void readFile();
void updateRecord();
void deleteRecord();
void randomAccess();

int main() {
    int choice;
    while (1) {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: createFile(); break;
            case 2: addRecord(); break;
            case 3: readFile(); break;
            case 4: updateRecord(); break;
            case 5: deleteRecord(); break;
            case 6: randomAccess(); break;
            case 7: exit(0);
            default: printf("Geçersiz seçim!\n");
        }
    }
    return 0;
}

void menu() {
    printf("\n-- DOSYA YÖNETİMİ --\n");
    printf("1. Dosya Oluştur\n");
    printf("2. Kayıt Ekle\n");
    printf("3. Dosyayı Oku\n");
    printf("4. Kayıt Güncelle\n");
    printf("5. Kayıt Sil\n");
    printf("6. Rastgele Erişim\n");
    printf("7. Çıkış\n");
    printf("Seçiminizi yapın: ");
}

void createFile() {
    FILE *file = fopen(FILE_NAME, "wb");
    if (file == NULL) {
        printf("Dosya oluşturulamadı!\n");
        return;
    }
    printf("Dosya başarıyla oluşturuldu.\n");
    fclose(file);
}

void addRecord() {
    struct Record rec;
    FILE *file = fopen(FILE_NAME, "ab");
    if (file == NULL) {
        printf("Dosya açılamadı!\n");
        return;
    }
    printf("Kayıt ID girin: ");
    scanf("%d", &rec.id);
    printf("İsim girin: ");
    scanf("%s", rec.name);
    printf("Değer girin: ");
    scanf("%f", &rec.value);
    fwrite(&rec, sizeof(struct Record), 1, file);
    fclose(file);
    printf("Kayıt başarıyla eklendi.\n");
}

void readFile() {
    struct Record rec;
    FILE *file = fopen(FILE_NAME, "rb");
    if (file == NULL) {
        printf("Dosya bulunamadı!\n");
        return;
    }
    printf("\n-- Kayıtlar --\n");
    while (fread(&rec, sizeof(struct Record), 1, file)) {
        printf("ID: %d, İsim: %s, Değer: %.2f\n", rec.id, rec.name, rec.value);
    }
    fclose(file);
}

void updateRecord() {
    struct Record rec;
    int id, found = 0;
    FILE *file = fopen(FILE_NAME, "rb+");
    if (file == NULL) {
        printf("Dosya bulunamadı!\n");
        return;
    }
    printf("Güncellemek istediğiniz kayıt ID: ");
    scanf("%d", &id);
    while (fread(&rec, sizeof(struct Record), 1, file)) {
        if (rec.id == id) {
            printf("Yeni isim: ");
            scanf("%s", rec.name);
            printf("Yeni değer: ");
            scanf("%f", &rec.value);
            fseek(file, -sizeof(struct Record), SEEK_CUR);
            fwrite(&rec, sizeof(struct Record), 1, file);
            found = 1;
            break;
        }
    }
    fclose(file);
    if (found) 
        printf("Kayıt güncellendi!\n");
    else 
        printf("Kayıt bulunamadı!\n");
}

void deleteRecord() {
    struct Record rec;
    int id, found = 0;
    FILE *file = fopen(FILE_NAME, "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (file == NULL || temp == NULL) {
        printf("Dosya işlemi başarısız!\n");
        return;
    }
    printf("Silmek istediğiniz kayıt ID: ");
    scanf("%d", &id);
    while (fread(&rec, sizeof(struct Record), 1, file)) {
        if (rec.id == id) {
            found = 1;
            continue;
        }
        fwrite(&rec, sizeof(struct Record), 1, temp);
    }
    fclose(file);
    fclose(temp);
    remove(FILE_NAME);
    rename("temp.dat", FILE_NAME);
    if (found) 
        printf("Kayıt silindi!\n");
    else 
        printf("Kayıt bulunamadı!\n");
}

void randomAccess() {
    struct Record rec;
    int id;
    FILE *file = fopen(FILE_NAME, "rb");
    if (file == NULL) {
        printf("Dosya bulunamadı!\n");
        return;
    }
    printf("Erişmek istediğiniz kayıt ID: ");
    scanf("%d", &id);
    fseek(file, (id - 1) * sizeof(struct Record), SEEK_SET);
    if (fread(&rec, sizeof(struct Record), 1, file)) {
        printf("ID: %d, İsim: %s, Değer: %.2f\n", rec.id, rec.name, rec.value);
    } else {
        printf("Kayıt bulunamadı!\n");
    }
    fclose(file);
}