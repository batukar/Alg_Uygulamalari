#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    int i, uzunluk, palindrom = 1;

    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    uzunluk = strlen(kelime);

    for (i = 0; i < uzunluk / 2; i++) {
        if (kelime[i] != kelime[uzunluk - i - 1]) {
            palindrom = 0;
            break;
        }
    }

    if (palindrom)
        printf("Bu kelime bir palindromdur.\n");
    else
        printf("Bu kelime palindrom degildir.\n");

    return 0;
}