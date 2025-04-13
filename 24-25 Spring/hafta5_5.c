#include <stdio.h>
#include <string.h>

int main() {
    char kelime[100];
    
    printf("Bir kelime girin: ");
    scanf("%s", kelime);

    int uzunluk = strlen(kelime);

    printf("Ters hali: ");
    for (int i = uzunluk - 1; i >= 0; i--) {
        printf("%c", kelime[i]);
    }

    printf("\n");
    return 0;
}