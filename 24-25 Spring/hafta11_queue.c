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
void dequeue();

int main() {
    int secim, veri;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Kuyruğa Ekle (Enqueue)\n");
        printf("2. Kuyruktan Çıkar (Dequeue)\n");
        printf("3. Kuyruğu Yazdır\n");
        printf("4. Çıkış\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                enqueue(veri);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                yazdir();
                break;
            case 4:
                printf("Çıkılıyor...\n");
                exit(0);
            default:
                printf("Geçersiz seçim!\n");
        }
    }
    return 0;
}

// Kuyruk yazdirma
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

// Kuyruga eleman ekleme
void enqueue(int veri) {
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = NULL;

    if (rear == NULL) {
        // back = yeni;
        // front = back;
        front = rear = yeni;
    } else {
        rear->next = yeni;
        rear = yeni;
    }

    printf("%d kuyruğa eklendi.\n", veri);
}

// Kuyruktan eleman silme
void dequeue() {
    if (front == NULL) {
        printf("Kuyruk boş, çıkarılacak eleman yok.\n");
        return;
    }

    Node* temp = front;
    front = front->next;

    // Kuyruk boşaldıysa rear'ı da sıfırla
    if (front == NULL)
        rear = NULL;

    printf("%d kuyruktan çıkarıldı.\n", temp->data);
    free(temp);
}