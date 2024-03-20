#include <stdio.h>

void changeValue(int *ptr) {
    *ptr = 50;
}

int main() {
    int num = 40;
    printf("Önce: %d\n", num);

    changeValue(&num); // 50

    printf("Sonra: %d\n", num); 

    return 0;
}