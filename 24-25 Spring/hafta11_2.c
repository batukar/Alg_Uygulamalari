// Stack
#include <stdio.h>
#include <stdlib.h>

// Node yapısı
struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;
Node* top = NULL; // Yığının en üstünü temsil eder

void yazdir();
void push(int veri);

// Menü
int main() {
    int secim, veri;

    while (1) {
        printf("\n--- Yığın İşlemleri ---\n");
        printf("1. Push (Ekle)\n");
        printf("2. Yazdır\n");
        printf("3. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                push(veri);
                break;
            case 2:
                yazdir();
                break;
            case 3:
                printf("Çıkılıyor...\n");
                exit(0);
            default:
                printf("Geçersiz seçim!\n");
        }
    }

    return 0;
}

// Yığını yazdır
void yazdir() {
    Node* temp = top;
    printf("Yığın (üstten alta): ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Eleman ekleme (push)
void push(int veri) {
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = top;
    top = yeni;
    printf("Eklendi: %d\n", veri);
}

