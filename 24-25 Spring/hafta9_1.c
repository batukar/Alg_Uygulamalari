#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Product {
    int id;
    char name[50];
    int stock;
    double price;
};

void menu();
void addProduct();
void updateStock();
void displayProduct();

int main() {
    int choice;

    while (1) {
        menu();
        scanf("%d", &choice);
        switch (choice) {
            case 1: addProduct(); break;
            case 2: updateStock(); break;
            case 3: displayProduct(); break;
            case 4: exit(0);
            default: printf("Geçersiz seçim!\n");
        }
    }
}

void menu(){
    printf("\n--- Ürün Yönetimi ---\n");
    printf("1. Ürün Ekle\n");
    printf("2. Stok Güncelle\n");
    printf("3. Ürün Bilgisi Göster\n");
    printf("4. Çıkış\n");
    printf("Seçiminizi yapın: ");
}

void addProduct() {
    struct Product p;
    FILE *file = fopen("products.dat", "ab");

    printf("Ürün ID: ");
    scanf("%d", &p.id);
    printf("Ürün Adı: ");
    scanf("%s", p.name);
    printf("Stok Miktarı: ");
    scanf("%d", &p.stock);
    printf("Ürün Fiyatı: ");
    scanf("%lf", &p.price);

    fwrite(&p, sizeof(struct Product), 1, file);
    fclose(file);
    printf("Ürün eklendi.\n");
}

void updateStock() {
    struct Product p;
    int id, newStock;
    FILE *file = fopen("products.dat", "rb+");

    printf("Güncellemek istediğiniz ürün ID: ");
    scanf("%d", &id);

    fseek(file, (id - 1) * sizeof(struct Product), SEEK_SET);
    fread(&p, sizeof(struct Product), 1, file);

    printf("Mevcut Stok: %d\n", p.stock);
    printf("Yeni Stok: ");
    scanf("%d", &newStock);
    p.stock = newStock;

    fseek(file, -sizeof(struct Product), SEEK_CUR);
    fwrite(&p, sizeof(struct Product), 1, file);
    fclose(file);
    printf("Stok güncellendi.\n");
}

void displayProduct() {
    struct Product p;
    int id;
    FILE *file = fopen("products.dat", "rb");

    printf("Görüntülemek istediğiniz ürün ID: ");
    scanf("%d", &id);

    fseek(file, (id - 1) * sizeof(struct Product), SEEK_SET);
    fread(&p, sizeof(struct Product), 1, file);

    printf("ID: %d, Ad: %s, Stok: %d, Fiyat: %.2lf\n", p.id, p.name, p.stock, p.price);
    fclose(file);
}