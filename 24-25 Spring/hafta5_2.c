#include <stdio.h>

int main() {
    char kelime[] = "Kodlama";

    for (int i = 0; kelime[i] != '\0'; i++) {
        printf("%c ", kelime[i]);
    }

    return 0;
}