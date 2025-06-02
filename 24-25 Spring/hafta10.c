#include  <stdio.h>
#include  <stdlib.h>

struct Node{
    int data;
    struct Node* next;
};

typedef struct Node Node;
Node* head = NULL;

void yazdir();
void basaEkle(int veri);
void arayaEkle(int veri, int sira);
void sonaEkle(int veri);
void dugumSil(int sira);

int main(){
    int secim, veri, sira;

    while(1){
        printf("\n---Nenu----\n");
        printf("1. Basa Ekleme\n");
        printf("2. Araya Ekleme\n");
        printf("3. Sona Ekleme\n");
        printf("4. Dugum Sil (Sira ile)\n");
        printf("5. Yazdir\n");
        printf("6. Cikis\n");
        printf("Seciminizi yapin: ");
        scanf("%d", &secim);
        
        switch (secim){
            case 1:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                basaEkle(veri);
                break;
            case 2:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                printf("Sira: ");
                scanf("%d", &sira);
                arayaEkle(veri, sira);
                break;
            case 3:
                printf("Eklenecek veri: ");
                scanf("%d", &veri);
                sonaEkle(veri);
                break;
            case 4:
                printf("Silinecek dugumun sirasi: ");
                scanf("%d", &sira);
                dugumSil(sira);
                break;
            case 5:
                yazdir();
                break;
            case 6:
                printf("Programdan cikiliyor...\n");
                exit(0);
            default:
                printf("Gecersiz secim!\n");
                break;
        }
    }

    return 0;
}

void yazdir(){
    Node* temp = head;
    printf("Liste: ");
    while (temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

void basaEkle(int veri){
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = head;

    head = yeni;
}

void arayaEkle(int veri, int sira){
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = NULL;

    if(sira == 0){
        basaEkle(veri);
        return;
    }

    Node* temp = head;
    for(int i = 0; i < sira - 1; i++){
        if(temp == NULL){
            printf("Girilen deger listeden buyuktur! Ekleme yapilamadi.\n");
            free(yeni);
            return;
        }
        temp = temp->next;
    }

    yeni->next = temp->next;
    temp->next = yeni;

    printf("%d. siraya eklendi: %d\n", sira ,veri);
}

void sonaEkle(int veri){
    Node* yeni = (Node*)malloc(sizeof(Node));
    yeni->data = veri;
    yeni->next = NULL;

    if(head == NULL){
        head = yeni;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = yeni;
    printf("Son eleman eklendi: %d\n", veri);
}

void dugumSil(int sira){
    if (head == NULL) {
        printf("Liste bos, silinecek bir sey yok.\n");
        return;
    }

    Node* temp = head;

    if (sira == 0) {
        head = head->next;
        printf("0. siradaki dugum silindi: %d\n", temp->data);
        free(temp);
        return;
    }

    Node* onceki = NULL;
    for (int i = 0; i < sira; i++) {
        onceki = temp;
        temp = temp->next;
        if (temp == NULL) {
            printf("Girilen sira listeden buyuk! Silme yapilamadi.\n");
            return;
        }
    }

    onceki->next = temp->next;
    printf("%d. siradaki dugum silindi: %d\n", sira, temp->data);
    free(temp);
}