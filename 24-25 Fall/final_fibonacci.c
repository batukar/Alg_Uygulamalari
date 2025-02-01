#include <stdio.h>

// Fibonacci fonksiyonunun prototipi
int fibonacci(int n);

int main() {
    int elemanSayisi;

    // Kullanıcıdan Fibonacci dizisi uzunluğunu al
    printf("Kac elemanli Fibonacci dizisi istiyorsunuz? ");
    scanf("%d", &elemanSayisi);

    // Kullanıcının girdiği eleman sayısı kadar Fibonacci dizisini yazdır
    printf("Fibonacci Dizisi: ");
    for (int i = 0; i < elemanSayisi; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}

// Özyinelemeli Fibonacci fonksiyonu
int fibonacci(int n) {
    if (n == 0) {
        return 0; // Fibonacci serisindeki ilk eleman 0'dır
    } else if (n == 1) {
        return 1; // Fibonacci serisindeki ikinci eleman 1'dir
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Özyinelemeli çağrı
    }
}