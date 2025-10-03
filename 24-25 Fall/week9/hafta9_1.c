


#include <stdio.h>

int x = 0; // Global değişken

// Prototipler
int input();
int maksimum(int a, int b);
int minimum(int a, int b);

int main() {
    int x, y;
    x = input();
    y = input();

    printf("Sayilardan en buyugu = %d\n", maksimum(x, y));
    printf("Sayilardan en kucugu = %d\n", minimum(x, y));
}

int input(){
    printf("Sayi girin: \n");
    scanf("%d", &x);

    return x;
}

int maksimum(int a, int b) {
    return (a > b) ? a : b;
}

int minimum(int a, int b) {
    return (a < b) ? a : b;
}