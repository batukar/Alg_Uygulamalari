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

// Menü
int main() {
    int secim;

    while (1) {
        printf("\n--- Yığın İşlemleri ---\n");
        printf("1. Yazdır\n");
        printf("2. Çıkış\n");
        printf("Seçiminiz: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                yazdir();
                break;
            case 2:
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