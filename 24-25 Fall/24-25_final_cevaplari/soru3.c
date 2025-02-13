#include <stdio.h>

int fibonacci(int n);

int main() {
    int elemanSayisi;

    printf("Kac elemanli Fibonacci dizisi istiyorsunuz? ");
    scanf("%d", &elemanSayisi);

    printf("Fibonacci Dizisi: ");
    for (int i = 0; i < elemanSayisi; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}


int fibonacci(int n) {
    if (n == 0) {
        return 0; 
    } else if (n == 1) {
        return 1; 
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); 
    }
}