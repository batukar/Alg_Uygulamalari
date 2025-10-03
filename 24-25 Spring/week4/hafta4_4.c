#include <stdio.h>

int toplama(int a, int b);
int carpma(int a, int b);
void hesapla(int x, int y, int (*islem)(int, int));

int main() {
    hesapla(4, 5, toplama);
    hesapla(4, 5, carpma);
    return 0;
}

int toplama(int a, int b) {
    return a + b;
}

int carpma(int a, int b) {
    return a * b;
}

void hesapla(int x, int y, int (*islem)(int, int)) {
    printf("Sonuc: %d\n", islem(x, y));
}