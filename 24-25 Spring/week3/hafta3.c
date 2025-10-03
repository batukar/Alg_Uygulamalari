#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Satır ve sütun bilgileri tanımlamaları
#define ROWS 2
#define COLS 2

// Global matris tanımlamaları
int array1[ROWS][COLS];
int array2[ROWS][COLS];
int targetMatrix[ROWS][COLS];

// Fonksiyon prototipleri tanımlamaları
void randomValueGenerator(int matrix[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);
void sumMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);
void multiMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);
void matrixTranspose(int matrix[ROWS][COLS]);

int main(){
    srand(time(NULL));

    printf("*****-1.Matris-*****\n");
    randomValueGenerator(array1);
    printMatrix(array1);

    printf("*****-2.Matris-*****\n");
    randomValueGenerator(array2);
    printMatrix(array2);

    printf("*****-Matrislerin Toplamı-*****\n");
    sumMatrix(array1, array2);
    printMatrix(targetMatrix);

    printf("*****-Matrislerin Çarpımı-*****\n");
    multiMatrix(array1, array2);
    printMatrix(targetMatrix);

    printf("*****-Matrisin Transpozu-*****\n");
    matrixTranspose(targetMatrix);

    return 0;
}

// Matrislere rastgele eleman ataması yapan fonksiyon
void randomValueGenerator(int matrix[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){
        for (size_t j = 0; j < COLS; j++){
            matrix[i][j] = rand() % 10 + 1;
        }
    } 
}

// Matrisleri ekrana yazdıran fonksiyon
void printMatrix(int matrix[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){
        for (size_t j = 0; j < COLS; j++){
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

// İki matrisin toplamını yapan fonksiyon
void sumMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){
        for (size_t j = 0; j < COLS; j++){
            targetMatrix[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

// İki matrisin çarpımını yapan fonksiyon
void multiMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){ // satırları geziyor
        for (size_t j = 0; j < COLS; j++){ // sütunları geziyor
            targetMatrix[i][j] = 0;
            for (size_t k = 0; k < COLS; k++){ // İlk matrisin satırı ile ikinci matrisin 
                                               //sütunu arasında çarpımları topluyor
                targetMatrix[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}

// Matrisin transpozunu alan fonksiyon
void matrixTranspose(int matrix[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){
        for (size_t j = 0; j < COLS; j++){
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }
}