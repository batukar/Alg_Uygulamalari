// Bagli liste olusturma
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

typedef struct Node Node;
Node* head = NULL;

void yazdir();

int main() {
    int secim;

    while (1) {
        printf("\n--- MENU ---\n");
        printf("1. Yazdir\n");
        printf("2. Çikis\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &secim);

        switch (secim) {
            case 1:
                yazdir();
                break;
            case 2:
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