#include <stdio.h>

int main() {
    // 0x16d38f250
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr; // dizinin ilk elemanının adresi

    printf("Dizinin ilk elemani: %d\n", *ptr);

    ptr++; 
    printf("Dizinin ikinci elemani: %d\n", *ptr);

    ptr++; 
    printf("Dizinin üçüncü elemani: %d\n", *ptr);

    ptr++; 
    printf("Dizinin dördüncü elemani: %d\n", *ptr);

    ptr++; 
    printf("Dizinin beşinci elemani: %d\n", *ptr);

    return 0;
}