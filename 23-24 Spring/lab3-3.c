#include <stdio.h>

#define ROWS 4
#define COLS 3

int main(){
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8 ,9},
        {10, 11, 12}
    };

    int transposed[COLS][ROWS];

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            transposed[j][i] = matrix[i][j];
        }
    }
    
    printf("Matris : \n");
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    
    printf("Matrisin transpozu : \n");
    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            printf("%d ", transposed[i][j]);
        }
        printf("\n");
    }
    
}