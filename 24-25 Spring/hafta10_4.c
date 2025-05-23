// Bagli listeye sona eleman ekleme
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
void arayaEkle(int veri, int pozisyon);
void ekleSona(int veri);

int main() {
    int secim, veri, poz;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Basa Ekle\n");
        printf("2. Araya Ekle\n");
        printf("3. Sona Ekle\n");
        printf("4. Yazdir\n");
        printf("5. Çikis\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                ekleBasa(veri);
                break;
            case 2:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                printf("Pozisyon (0'dan baslar): ");
                scanf("%d", &poz);
                arayaEkle(veri, poz);
                break;
            case 3:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                ekleSona(veri);
                break;
            case 4:
                yazdir();
                break;
            case 5:
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

void arayaEkle(int veri, int pozisyon) {
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = NULL;

    if (pozisyon == 0) {
        yeni->next = head;
        head = yeni;
        return;
    }

    Node* temp = head;
    for (int i = 0; i < pozisyon - 1; i++) {
        if (temp == NULL) {
            printf("Pozisyon listeden büyük! Ekleme yapilamadi.\n");
            free(yeni);
            return;
        }
        temp = temp->next;
    }

    yeni->next = temp->next;
    temp->next = yeni;
}

void ekleSona(int veri) {
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = NULL;

    if (head == NULL) {
        head = yeni;  // Liste boşsa, head doğrudan bu eleman olur
        return;
    }

    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }

    temp->next = yeni;
}