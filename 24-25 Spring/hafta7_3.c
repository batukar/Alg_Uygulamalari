#include <stdio.h>

int main() {
    int a = 12;    // 1100
    int b = 10;    // 1010
    int result = a ^ b;  // 0110 → 6

    printf("XOR sonucu: %d\n", result);
    return 0;
}