#include <stdio.h>
#include <string.h>  // strcpy fonksiyonu için gerekli

// Bir öğrencinin bilgilerini tutan struct tanımı
struct Student {
    char name[50];   // Öğrencinin adı (karakter dizisi)
    int id;          // Öğrencinin numarası
    int midterm;     // Vize notu
    int final;       // Final notu
};

int main() {
    // Bir Student yapısı değişkeni oluşturup alanlarını dolduralım
    struct Student student1;
    
    // İsim alanına değer atama (strcpy ile metin kopyalıyoruz)
    strcpy(student1.name, "Ahmet Yılmaz");
    student1.id = 12345;
    student1.midterm = 85;
    student1.final = 90;
    
    // Bilgileri ekrana yazdıralım
    printf("Öğrenci Adı: %s\n", student1.name);
    printf("Öğrenci No : %d\n", student1.id);
    printf("Vize Notu  : %d\n", student1.midterm);
    printf("Final Notu : %d\n", student1.final);
    
    return 0;
}