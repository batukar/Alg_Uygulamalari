#include <stdio.h>

int main() {
    char isim[20];
    
    printf("Adinizi girin: ");
    gets(isim);
    
    puts("Hosgeldiniz:");
    puts(isim);
    
    return 0;
}