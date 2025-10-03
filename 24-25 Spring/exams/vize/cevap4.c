#include <stdio.h>
#include <string.h>

// Global değişkenler
char correct_email[100] = "a@a.com";
char correct_id[100] = "1234567890";

// Kullanıcıdan alınacak inputlar
char input_email[100];
char input_id[100];

// Fonksiyon prototipleri
void inputEmail(char array[]);
void inputID(char array[]);
void input(char array[], void (*inputFonk)(char array[]));
int stringLength(char array[]);
void validate(char input1[], char input2[]);

int main() {
    // Email input
    input(input_email, inputEmail);
    // Telefon input
    input(input_id, inputID);

    // Doğrulama
    validate(input_email, input_id);

    return 0;
}

// Email girişi
void inputEmail(char array[]) {
    printf("Email adresinizi giriniz: ");
    scanf("%s", array);
    if (stringLength(array) < 5) {
        printf("Email adresi çok kısa, tekrar giriniz.\n");
        inputEmail(array);
    }
}

// ID girişi
void inputID(char array[]) {
    printf("Okul numaranizi giriniz (10 haneli): ");
    scanf("%s", array);
    if (stringLength(array) != 10) {
        printf("Okul numaraniz 10 haneli olmalidir, tekrar giriniz.\n");
        inputID(array);
    }
}

// Genel input fonksiyonu - Pointer ile hangi fonksiyonun çağrılacağını seçiyoruz
void input(char array[], void (*inputFonk)(char array[])) {
    inputFonk(array);  // Fonksiyon pointer'ı ile ilgili fonksiyonu çalıştırıyoruz
}

// String uzunluğu hesaplama
int stringLength(char array[]) {
    int count = 0;
    while (array[count] != '\0') {
        count++;
    }
    return count;
}

// Email ve ID doğrulama
void validate(char input1[], char input2[]) {
    if (strcmp(input1, correct_email) == 0 && strcmp(input2, correct_id) == 0) {
        printf("Giris basarili! Hos geldin, %s\n", correct_email);
    } else {
        printf("Giris basarisiz! Lutfen bilgilerinizi kontrol ediniz.\n");
    }
}