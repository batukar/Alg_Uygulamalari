//Rastgele erişim ve silme
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int id;
    char name[50];
    float grade;
};

void deleteRecord(int id);

int main() {
    int id;
    printf("Silmek istediğiniz ID: ");
    scanf("%d", &id);
    deleteRecord(id);
    return 0;
}

void deleteRecord(int id) {
    struct Student s;
    FILE *file = fopen("students.dat", "rb");
    FILE *temp = fopen("temp.dat", "wb");

    if (file == NULL || temp == NULL) {
        printf("Dosya açılamadı!\n");
        return;
    }

    while (fread(&s, sizeof(struct Student), 1, file)) {
        if (s.id != id) {
            fwrite(&s, sizeof(struct Student), 1, temp);
        }
    }

    fclose(file);
    fclose(temp);

    remove("students.dat");
    rename("temp.dat", "students.dat");
    printf("Kayıt silindi.\n");
}