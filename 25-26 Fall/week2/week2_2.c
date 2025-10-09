#include <stdio.h>

int main(){
    int a = 10;
    int b = 5;
    int fark = a - b;
    printf("Fark: %d\n", fark);

    fark = b - a;
    printf("Yeni fark: %d\n", fark);
}