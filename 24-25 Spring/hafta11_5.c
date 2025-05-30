// Queue
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;

Node* front = NULL; // Kuyruğun başı
Node* rear = NULL;  // Kuyruğun sonu

void yazdir();
void enqueue(int veri);

int main() {
    int secim, veri;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Kuyruğa Ekle (Enqueue)\n");
        printf("2. Kuyruğu Yazdır\n");
        printf("3. Çıkış\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                enqueue(veri);
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

void yazdir() {
    if (front == NULL) {
        printf("Kuyruk boş.\n");
        return;
    }

    Node* temp = front;
    printf("Kuyruk: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void enqueue(int veri) {
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = NULL;

    if (rear == NULL) {
        front = rear = yeni;
    } else {
        rear->next = yeni;
        rear = yeni;
    }

    printf("%d kuyruğa eklendi.\n", veri);
}
