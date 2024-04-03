#include <stdio.h>

struct Book
{
    char name[100];
    char author[50];
    int pages;
    float price;
};

int main(){
    struct Book book1 = {"Nutuk", "M.K. Atatürk", 766, 99.9};

    printf("Kitap bilgileri: \n");
    printf("Kitap adı: %s\n", book1.name);
    printf("Yazar: %s\n", book1.author);
    printf("Sayfa sayısı: %d\n", book1.pages);
    printf("Kitap fiyatı: %.2f\n", book1.price);

}