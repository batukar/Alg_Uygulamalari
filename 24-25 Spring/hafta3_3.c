#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 2
#define COLS 2

int array1[ROWS][COLS];
int array2[ROWS][COLS];
int targetMatrix[ROWS][COLS];

void randomValueGenerator(int matrix[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);
void sumMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);
void multiMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]);

int main(){
    srand(time(NULL));

    randomValueGenerator(array1);
    randomValueGenerator(array2);

    printf("*****-Dizi1-*****\n");
    printMatrix(array1);
    printf("*****-Dizi2-*****\n");
    printMatrix(array2);

    printf("*****-Matris-Toplamı-*****\n");
    sumMatrix(array1, array2);
    printMatrix(targetMatrix);

    printf("*****-Matris-Çarpımı-*****\n");
    multiMatrix(array1, array2);
    printMatrix(targetMatrix);

    return 0;
}

void randomValueGenerator(int arr[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){
        for (size_t j = 0; j < COLS; j++){
            arr[i][j] = rand() % 10 + 1;
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sumMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    for (size_t i = 0; i < ROWS; i++){
        for (size_t j = 0; j < COLS; j++){
            targetMatrix[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void multiMatrix(int arr1[ROWS][COLS], int arr2[ROWS][COLS]){
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            targetMatrix[i][j] = 0;
            for (int k = 0; k < COLS; k++) {
                targetMatrix[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
}