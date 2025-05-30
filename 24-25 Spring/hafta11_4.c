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

int main() {
    int secim;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Kuyruğu Yazdır\n");
        printf("2. Çıkış\n");
        printf("Seçiminizi yapın: ");
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