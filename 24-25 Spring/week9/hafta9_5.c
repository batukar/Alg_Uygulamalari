#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[50];
};

int main() {
    FILE *file;
    struct Employee emp;

    file = fopen("employees.dat", "w+");

    // Çalışan verilerini kaydetme
    emp.id = 1;
    strcpy(emp.name, "Ali");
    fwrite(&emp, sizeof(struct Employee), 1, file);

    emp.id = 2;
    strcpy(emp.name, "Veli");
    fwrite(&emp, sizeof(struct Employee), 1, file);

    // İkinci çalışanı güncelleme
    fseek(file, sizeof(struct Employee), SEEK_SET);
    emp.id = 2;
    strcpy(emp.name, "Ahmet");
    fwrite(&emp, sizeof(struct Employee), 1, file);

    fclose(file);
    printf("Guncelleme tamamlandi!\n");
    return 0;
}