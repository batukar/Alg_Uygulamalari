#include <stdio.h>

int main() {
    int a = 12;    // 0000 1100
    int result = ~a;  // 1111 0011 (2'nin tümleyeni -13)

    printf("NOT sonucu: %d\n", result);
    return 0;
}