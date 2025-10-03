// Dosya silme
#include <stdio.h>

int main() {
    if (remove("output.txt") == 0) {
        printf("Dosya basariyla silindi!\n");
    } else {
        printf("Dosya silinemedi!\n");
    }

    return 0;
}