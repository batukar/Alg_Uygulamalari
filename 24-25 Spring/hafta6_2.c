#include <stdio.h>
#include <string.h>

// Adres bilgilerini tutan yapı tanımı
struct Address {
    char city[30];
    char street[50];
    int houseNumber;
};

// Öğrenci bilgileri yapısı, içinde Address yapısını kullanıyor
struct Student {
    char name[50];
    int id;
    int midterm;
    int final;
    struct Address address;  // Öğrencinin adresi (içi doldurulacak ayrı bir struct)
};

int main() {
    struct Student student2;
    
    // Öğrencinin temel bilgilerini atayalım
    strcpy(student2.name, "Ayşe Demir");
    student2.id = 67890;
    student2.midterm = 92;
    student2.final = 88;
    
    // Adres bilgilerini atayalım (nested struct kullanımını gösteriyoruz)
    strcpy(student2.address.city, "İstanbul");
    strcpy(student2.address.street, "Örnek Caddesi");
    student2.address.houseNumber = 12;
    
    // Bilgileri yazdıralım
    printf("Öğrenci: %s (%d)\n", student2.name, student2.id);
    printf("Notları: Vize=%d, Final=%d\n", student2.midterm, student2.final);
    printf("Adres   : %s, %s No:%d\n", 
           student2.address.street, student2.address.city, student2.address.houseNumber);
    
    return 0;
}