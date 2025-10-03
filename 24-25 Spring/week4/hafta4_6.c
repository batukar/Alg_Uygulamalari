#include <stdio.h>

void degistir(int *a, int *b);

int main() {
    int x = 5, y = 10;
    printf("x = %d, y = %d\n", x, y);
    degistir(&x, &y);
    printf("x = %d, y = %d\n", x, y);
    return 0;
}

void degistir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
