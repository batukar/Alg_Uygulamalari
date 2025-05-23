// Bagli listeye basa eleman ekleme
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;
Node* head = NULL;

void yazdir();
void ekleBasa(int veri);

int main() {
    int secim, veri;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Basa Ekle\n");
        printf("2. Yazdir\n");
        printf("3. Çikis\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                ekleBasa(veri);
                break;
            case 2:
                yazdir();
                break;
            case 3:
                printf("Programdan çıkılıyor...\n");
                exit(0);
            default:
                printf("Geçersiz seçim!\n");
        }
    }

    return 0;
}

void yazdir() {
    Node* temp = head;
    printf("Liste: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void ekleBasa(int veri) {
    Node* yeni = (Node*)malloc(sizeof(Node)); // Bellekten yer ayır
    yeni->data = veri;
    yeni->next = head; // Yeni düğümün next'i mevcut head'i göstersin
    head = yeni; // head artık bu yeni düğüm olsun
}