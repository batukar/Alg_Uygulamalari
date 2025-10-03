#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define X 3
#define Y 3
#define Z 3

int main() {
    int array[X][Y][Z];

    srand(time(NULL));

    // Rastgele değer atama
    for (int i = 0; i < X; i++) {
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                array[i][j][k] = rand() % 100; // 0-99 arasında rastgele sayı
            }
        }
    }

    // Diziyi yazdırma
    for (int i = 0; i < X; i++) {
        printf("\nKatman %d:\n", i + 1);
        for (int j = 0; j < Y; j++) {
            for (int k = 0; k < Z; k++) {
                printf("%2d ", array[i][j][k]);
            }
            printf("\n");
        }
    }

    return 0;
}