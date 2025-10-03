#include <stdio.h>

#define ROWS 2
#define COLS 2

int main(){
    int matrix[ROWS][COLS] = { {1, 2}, {3, 4} };
    int sum = 0;

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            sum += matrix[i][j];
        }
    }
    
    printf("Matrisin elemanları toplamı = %d\n", sum);

}