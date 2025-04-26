#include <stdio.h>
#include <string.h>

// typedef ile struct tanımlama (takma ad verme)
typedef struct Student {
    char name[50];
    int id;
    int midterm;
    int final;
    struct Address {           // İçiçe adres yapısını burada da tanımlayabiliriz
        char city[30];
        char street[50];
        int houseNumber;
    } address;
} Student;  // Artık 'Student' doğrudan veri tipi olarak kullanılabilir

int main() {
    // 'struct Student' yerine doğrudan 'Student' diyerek değişken tanımlayabiliriz
    Student student3;
    
    strcpy(student3.name, "Mehmet Kaya");
    student3.id = 13579;
    student3.midterm = 78;
    student3.final = 82;
    
    // Adres alt yapısını dolduralım
    strcpy(student3.address.city, "Ankara");
    strcpy(student3.address.street, "Atatürk Bulvarı");
    student3.address.houseNumber = 45;
    
    // Bilgileri yazdıralım
    printf("Öğrenci: %s (%d)\n", student3.name, student3.id);
    printf("Notlar : Vize=%d, Final=%d\n", student3.midterm, student3.final);
    printf("Adres  : %s, %s No:%d\n", 
           student3.address.street, student3.address.city, student3.address.houseNumber);
    
    return 0;
}