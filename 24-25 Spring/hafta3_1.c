#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 2
#define COLS 2

int array1[ROWS][COLS];
int array2[ROWS][COLS];

void randomValueGenerator(int matrix[ROWS][COLS]);
void printMatrix(int matrix[ROWS][COLS]);

int main(){
    srand(time(NULL));

    randomValueGenerator(array1);
    randomValueGenerator(array2);

    printf("*****-1.Matris-*****\n");
    printMatrix(array1);
    printf("*****-2.Matris-*****\n");
    printMatrix(array2);

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