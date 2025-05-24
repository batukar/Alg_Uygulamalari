// Rastgele dosya erişimi
#include <stdio.h>

struct Person {
    int id;
    char name[20];
};

int main() {
    FILE *file = fopen("people.dat", "wb+");
    struct Person p = {1, "Alice"};
    fwrite(&p, sizeof(struct Person), 1, file);

    fseek(file, 0, SEEK_SET);
    fread(&p, sizeof(struct Person), 1, file);
    printf("ID: %d, Name: %s\n", p.id, p.name);
    fclose(file);
    return 0;
}