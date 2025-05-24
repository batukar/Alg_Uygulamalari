#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void addStudent();
void updateGrade();
void showStudent();

int main() {
    int choice;

    while (1) {
        printf("\n--- Öğrenci Not Defteri ---\n");
        printf("1. Öğrenci Ekle\n");
        printf("2. Not Güncelle\n");
        printf("3. Öğrenci Göster\n");
        printf("4. Çıkış\n");
        printf("Seçiminizi yapın: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addStudent(); break;
            case 2: updateGrade(); break;
            case 3: showStudent(); break;
            case 4: exit(0);
            default: printf("Geçersiz seçim!\n");
        }
    }
}

void addStudent() {
    struct Student s;
    FILE *file = fopen("students.dat", "ab");

    printf("Öğrenci ID: ");
    scanf("%d", &s.id);
    printf("Öğrenci Adı: ");
    scanf("%s", s.name);
    printf("Öğrenci Notu: ");
    scanf("%f", &s.grade);

    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);
    printf("Öğrenci kaydedildi.\n");
}

void updateGrade() {
    struct Student s;
    int id;
    float newGrade;
    FILE *file = fopen("students_grades.dat", "rb+");

    printf("Notunu güncellemek istediğiniz öğrenci ID: ");
    scanf("%d", &id);

    fseek(file, (id - 1) * sizeof(struct Student), SEEK_SET);
    fread(&s, sizeof(struct Student), 1, file);

    printf("Mevcut Not: %.2f\n", s.grade);
    printf("Yeni Not: ");
    scanf("%f", &newGrade);
    s.grade = newGrade;

    fseek(file, -sizeof(struct Student), SEEK_CUR);
    fwrite(&s, sizeof(struct Student), 1, file);
    fclose(file);
    printf("Not güncellendi.\n");
}

void showStudent() {
    struct Student s;
    int id;
    FILE *file = fopen("students_grades.dat", "rb");

    printf("Bilgilerini görmek istediğiniz öğrenci ID: ");
    scanf("%d", &id);

    fseek(file, (id - 1) * sizeof(struct Student), SEEK_SET);
    fread(&s, sizeof(struct Student), 1, file);

    printf("ID: %d, Ad: %s, Not: %.2f\n", s.id, s.name, s.grade);
    fclose(file);
}