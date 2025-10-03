// normal dosya erişimi
#include <stdio.h>

int main() {
    FILE *file = fopen("text.txt", "w");
    fprintf(file, "Hello, World!\n");
    fclose(file);

    file = fopen("text.txt", "r");
    char buffer[100];
    fgets(buffer, 100, file);
    printf("Content: %s", buffer);
    fclose(file);
    return 0;
}