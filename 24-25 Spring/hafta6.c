#include <stdio.h>
#include <string.h>

struct Lecture {
    int id;
    char lectureName[50];
    int absent;
    int midterm;
    int final;
    float average;
};

struct Student {
    int id;
    char name[20];
    char surname[20];
    struct Lecture lectures[2];
};

int main() {
    struct Student s1, s2;

    // Öğrenci 1 bilgileri
    s1.id = 242503042;
    strcpy(s1.name, "Ege");
    strcpy(s1.surname, "Arkali");

    // Öğrenci 1 ders 1
    s1.lectures[0].id = 1;
    strcpy(s1.lectures[0].lectureName, "algoritma");
    s1.lectures[0].absent = 4;
    printf("%d numarali ogrencinin %s dersi vize notunu girin: ", s1.id, s1.lectures[0].lectureName);
    scanf("%d", &s1.lectures[0].midterm);
    printf("%d numarali ogrencinin %s dersi final notunu girin: ", s1.id, s1.lectures[0].lectureName);
    scanf("%d", &s1.lectures[0].final);
    s1.lectures[0].average = s1.lectures[0].midterm * 0.4 + s1.lectures[0].final * 0.6;

    // Öğrenci 1 ders 2
    s1.lectures[1].id = 2;
    strcpy(s1.lectures[1].lectureName, "matematik");
    s1.lectures[1].absent = 7;
    printf("%d numarali ogrencinin %s dersi vize notunu girin: ", s1.id, s1.lectures[1].lectureName);
    scanf("%d", &s1.lectures[1].midterm);
    printf("%d numarali ogrencinin %s dersi final notunu girin: ", s1.id, s1.lectures[1].lectureName);
    scanf("%d", &s1.lectures[1].final);
    s1.lectures[1].average = s1.lectures[1].midterm * 0.4 + s1.lectures[1].final * 0.6;

    // Öğrenci 2 bilgileri
    s2.id = 242503024;
    strcpy(s2.name, "Merve");
    strcpy(s2.surname, "Aso");

    s2.lectures[0].id = 1;
    strcpy(s2.lectures[0].lectureName, "algoritma");
    s2.lectures[0].absent = 3;
    printf("%d numarali ogrencinin %s dersi vize notunu girin: ", s2.id, s2.lectures[0].lectureName);
    scanf("%d", &s2.lectures[0].midterm);
    printf("%d numarali ogrencinin %s dersi final notunu girin: ", s2.id, s2.lectures[0].lectureName);
    scanf("%d", &s2.lectures[0].final);
    s2.lectures[0].average = s2.lectures[0].midterm * 0.4 + s2.lectures[0].final * 0.6;

    printf("\n********** NOT SONUÇLARI **********\n");

    // Öğrenci 1 için kontrol
    for (int i = 0; i < 2; i++) {
        printf("%d numarali ogrencinin %s dersi icin:\n", s1.id, s1.lectures[i].lectureName);
        if (s1.lectures[i].absent >= 10) {
            printf("Devamsizliktan kaldi!\n");
        } else {
            int grade = (int)(s1.lectures[i].average) / 10;
            switch (grade) {
                case 10:  // 100 için
                case 9:
                    printf("AA\n");
                    break;
                case 8:
                    printf("BA\n");
                    break;
                case 7:
                    printf("BB\n");
                    break;
                case 6:
                    printf("CB\n");
                    break;
                case 5:
                    printf("CC\n");
                    break;
                default:
                    printf("FF -> Dersten kaldi.\n");
                    break;
            }
        }
    }

    printf("\n");

    // Öğrenci 2 için kontrol
    for (int i = 0; i < 1; i++) { // sadece 1 dersi var
        printf("%d numarali ogrencinin %s dersi icin:\n", s2.id, s2.lectures[i].lectureName);
        if (s2.lectures[i].absent >= 10) {
            printf("Devamsizliktan kaldi!\n");
        } else {
            int grade = (int)(s2.lectures[i].average) / 10;
            switch (grade) {
                case 10:
                case 9:
                    printf("AA\n");
                    break;
                case 8:
                    printf("BA\n");
                    break;
                case 7:
                    printf("BB\n");
                    break;
                case 6:
                    printf("CB\n");
                    break;
                case 5:
                    printf("CC\n");
                    break;
                default:
                    printf("FF -> Dersten kaldi.\n");
                    break;
            }
        }
    }
    
    return 0;
}