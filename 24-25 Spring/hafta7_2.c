#include <stdio.h>

int main() {
    int a = 12;    // 1100
    int b = 10;    // 1010
    int result = a | b;  // 1110 → 14

    printf("OR sonucu: %d\n", result);
    return 0;
}