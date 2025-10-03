#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 5

void randomValueGenerator(int matrix[SIZE]);
void yazdir(int matrix[SIZE], int *ptr);

int dizi[SIZE];

int main() {
    srand(time(NULL));
    int *ptr = dizi;

    randomValueGenerator(dizi);
    yazdir(dizi, ptr);

    return 0;
}

void randomValueGenerator(int matrix[SIZE]) {
    for (size_t i = 0; i < SIZE; i++){
        matrix[i] = rand() % 10 + 1;
    }
}

void yazdir(int matrix[SIZE], int *ptr) {
    for (size_t i = 0; i < SIZE; i++){
        printf("dizi[%d] = %d\n", i, *(ptr + i));
    }
}